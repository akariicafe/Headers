@interface KNRecordingEvent : NSObject <NSCopying>

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic, getter=isIgnoredWhenSeeking) BOOL ignoredWhenSeeking;
@property (readonly, nonatomic) BOOL canPrecedeDiscontinuity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(double)a0;
- (void)loadFromMessage:(const struct RecordingEventArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RecordingNavigationEventArchive *x4; struct RecordingLaserEventArchive *x5; struct RecordingPauseEventArchive *x6; struct RecordingMovieEventArchive *x7; double x8; } *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (id)recordingEventByAddingTimeOffset:(double)a0;
- (id)initWithMessage:(const struct RecordingEventArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RecordingNavigationEventArchive *x4; struct RecordingLaserEventArchive *x5; struct RecordingPauseEventArchive *x6; struct RecordingMovieEventArchive *x7; double x8; } *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (void)saveToMessage:(struct RecordingEventArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RecordingNavigationEventArchive *x4; struct RecordingLaserEventArchive *x5; struct RecordingPauseEventArchive *x6; struct RecordingMovieEventArchive *x7; double x8; } *)a0 archiver:(id)a1;

@end
