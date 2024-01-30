@class NSMutableArray;

@interface _CACGesturePointQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *nonSentinelPoints;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)effectiveStartIndexBasedOnLength;

@end
