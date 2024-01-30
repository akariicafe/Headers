@class TSPData;

@interface KNMovieSegment : NSObject

@property (readonly, nonatomic) TSPData *movieData;
@property (readonly, nonatomic, getter=isEmptySegment) BOOL emptySegment;
@property (readonly, nonatomic) double startTime;

- (void).cxx_destruct;
- (id)description;
- (void)saveToMessage:(struct MovieSegmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct DataReference *x5; double x6; } *)a0 archiver:(id)a1;
- (id)initWithMovieData:(id)a0 startTime:(double)a1;
- (id)initEmptySegmentWithStartTime:(double)a0;
- (id)movieSegmentByAddingTimeOffset:(double)a0;
- (id)initWithContext:(id)a0 message:(const struct MovieSegmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct DataReference *x5; double x6; } *)a1 unarchiver:(id)a2;

@end
