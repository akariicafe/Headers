@class NSUUID, TSPObjectContext, KNSlideNode;

@interface KNRecordingNavigationEvent : KNRecordingEvent {
    TSPObjectContext *_targetSlideNodeContextReference;
    NSUUID *_targetSlideNodeUUID;
}

@property (readonly, nonatomic) KNSlideNode *targetSlideNode;
@property (readonly, nonatomic) unsigned long long targetEventIndex;
@property (readonly, nonatomic) long long animationPhase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)loadFromMessage:(const struct RecordingEventArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RecordingNavigationEventArchive *x4; struct RecordingLaserEventArchive *x5; struct RecordingPauseEventArchive *x6; struct RecordingMovieEventArchive *x7; double x8; } *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (BOOL)isIgnoredWhenSeeking;
- (BOOL)canPrecedeDiscontinuity;
- (void)saveToMessage:(struct RecordingEventArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RecordingNavigationEventArchive *x4; struct RecordingLaserEventArchive *x5; struct RecordingPauseEventArchive *x6; struct RecordingMovieEventArchive *x7; double x8; } *)a0 archiver:(id)a1;
- (id)initWithStartTime:(double)a0 targetSlideNode:(id)a1 targetEventIndex:(unsigned long long)a2 animationPhase:(long long)a3;

@end
