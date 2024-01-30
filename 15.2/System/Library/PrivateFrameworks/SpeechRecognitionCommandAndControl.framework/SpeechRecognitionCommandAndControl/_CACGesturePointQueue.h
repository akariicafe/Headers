@class NSMutableArray;

@interface _CACGesturePointQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *nonSentinelPoints;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)effectiveStartIndexBasedOnLength;

@end
