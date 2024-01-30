@class TSPData;

@interface KNMovieSegment : NSObject

@property (readonly, nonatomic) TSPData *movieData;
@property (readonly, nonatomic, getter=isEmptySegment) BOOL emptySegment;
@property (readonly, nonatomic) double startTime;

- (id)description;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithMovieData:(id)a0 startTime:(double)a1;
- (id)initEmptySegmentWithStartTime:(double)a0;
- (id)movieSegmentByAddingTimeOffset:(double)a0;
- (id)initWithContext:(id)a0 message:(const void *)a1 unarchiver:(id)a2;

@end
