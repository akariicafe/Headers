@interface LRRComparatorResult : NSObject

@property (readonly, nonatomic) int comparatorName;
@property (nonatomic) BOOL isValidOriginalItem;
@property (nonatomic) BOOL isValidReplayedItem;
@property (nonatomic) BOOL isMatched;

- (id)initWithComparatorName:(int)a0;

@end
