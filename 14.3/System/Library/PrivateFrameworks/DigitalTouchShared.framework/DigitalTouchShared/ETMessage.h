@class UIColor, NSString, NSMutableSet;
@protocol ETMessageTimeSource, ETMessageDelegate;

@interface ETMessage : NSObject {
    NSMutableSet *_childrenDelayingWisp;
}

@property (readonly, nonatomic) unsigned short messageType;
@property (readonly, nonatomic) unsigned long long messageVersion;
@property (nonatomic) double timeCreated;
@property (nonatomic) double sendTime;
@property (nonatomic) double startDelay;
@property (nonatomic) BOOL supportsPlaybackTimeOffset;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL missedDuringPlayback;
@property (readonly, nonatomic) BOOL shouldLoopDuringPlayback;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic, getter=isRenderingOffscreen) BOOL renderingOffscreen;
@property (nonatomic, getter=isRenderingOffscreenOpaque) BOOL renderingOffscreenOpaque;
@property (readonly, nonatomic) double messageDuration;
@property (weak, nonatomic) id<ETMessageDelegate> delegate;
@property (weak, nonatomic) id<ETMessageTimeSource> timeSource;
@property (nonatomic) BOOL delayWisp;
@property (weak, nonatomic) ETMessage *parentMessage;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) BOOL mute;

+ (unsigned short)messageType;
+ (id)unarchive:(id)a0;

- (id)archive;
- (id)init;
- (void).cxx_destruct;
- (void)stopPlaying;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)archiveData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArchiveData:(id)a0;
- (void)childMessageDidDelayWisp:(id)a0;
- (id)messageTypeAsString;
- (void)displayInScene:(id)a0;
- (BOOL)reachedSizeLimit;
- (void)preVisualizeInScene:(id)a0;
- (BOOL)sendTimeIsValid;
- (void)_stopAudioPlayback;
- (void)_startAudioPlayback;
- (struct CGPoint { double x0; double x1; })scenePointFromNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 inScene:(id)a1;
- (void)wispChildren;
- (void)childMessageDidCompleteWisp:(id)a0;
- (BOOL)hasWispingChildren;

@end
