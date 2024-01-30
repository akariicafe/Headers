@class NSArray;

@interface KNRecordingMovieTrack : TSPObject {
    BOOL _isMovieSegmentDataTrimmedToDuration;
}

@property (readonly, nonatomic) NSArray *movieSegments;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadFromArchive:(const struct RecordingMovieTrackArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<KN::MovieSegmentArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; BOOL x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct RecordingMovieTrackArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<KN::MovieSegmentArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; BOOL x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 movieSegments:(id)a1;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)a0 trimDuration:(out double *)a1;
- (id)movieTrackByReplacingAfterTime:(double)a0 withMovieTrack:(id)a1 trimmedMovieSegment:(id)a2;

@end
