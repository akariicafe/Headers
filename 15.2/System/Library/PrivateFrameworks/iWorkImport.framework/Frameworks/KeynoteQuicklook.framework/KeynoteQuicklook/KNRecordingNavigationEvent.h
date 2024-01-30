@class NSUUID, TSPObjectContext, KNSlideNode;

@interface KNRecordingNavigationEvent : KNRecordingEvent {
    TSPObjectContext *_targetSlideNodeContextReference;
    NSUUID *_targetSlideNodeUUID;
}

@property (readonly, nonatomic) KNSlideNode *targetSlideNode;
@property (readonly, nonatomic) unsigned long long targetEventIndex;
@property (readonly, nonatomic) long long animationPhase;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (BOOL)isIgnoredWhenSeeking;
- (BOOL)canPrecedeDiscontinuity;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithStartTime:(double)a0 targetSlideNode:(id)a1 targetEventIndex:(unsigned long long)a2 animationPhase:(long long)a3;

@end
