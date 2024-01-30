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

- (id)init;
- (void).cxx_destruct;
- (id)peekOccurrence;
- (void)popOccurrence;
- (id)description;
- (void)pushOccurrence:(id)a0;

@end
