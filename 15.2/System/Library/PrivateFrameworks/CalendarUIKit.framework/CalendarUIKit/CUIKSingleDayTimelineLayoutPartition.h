@class NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject {
    NSMutableArray *_stackOfOccurrences;
}

@property (nonatomic) double topBoundaryTime;
@property (nonatomic) double initialStartBoundary;
@property (nonatomic) double endBoundary;
@property (readonly, nonatomic) NSArray *stackedOccurrences;
@property (readonly, nonatomic) double freeSpaceStartBoundary;
@property (readonly, nonatomic) double freeSpaceWidth;
@property (readonly, nonatomic) double totalWidth;

- (void)pushOccurrence:(id)a0;
- (id)peekOccurrence;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)popOccurrence;

@end
