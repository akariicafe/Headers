@class SKUniform, SKTexture, NSMutableSet, NSMutableArray, KissNode;

@interface ETKissMessage : ETMessage {
    SKTexture *_atlas;
    SKUniform *_atlasUniform;
    NSMutableArray *_points;
    NSMutableArray *_angles;
    NSMutableArray *_delays;
    NSMutableSet *_kissMarkNodes;
    double _lastKissTime;
    KissNode *_lastKiss;
    BOOL _didDelegateWillStopPlaying;
    BOOL _didDelegateDidStopPlaying;
}

+ (unsigned short)messageType;
+ (id)_kissColor;

- (id)init;
- (void).cxx_destruct;
- (void)stopPlaying;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (void)setParentMessage:(id)a0;
- (id)messageTypeAsString;
- (double)messageDuration;
- (void)displayInScene:(id)a0;
- (BOOL)reachedSizeLimit;
- (void)addKissAtNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 time:(double)a2 toScene:(id)a3;
- (void)_initAtlas;
- (BOOL)_leaveMarkAtDelay:(double)a0;
- (void)_displayKissAtPoint:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 leavesMark:(BOOL)a2 inScene:(id)a3;
- (BOOL)_hasKissesThatLeaveMark;
- (void)_notifyDelegateWillStopPlaying;
- (void)_notifyDelegateDidStopPlaying;
- (void)_setKissLeavesMark:(id)a0;

@end
