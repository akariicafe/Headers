@class NSMutableArray;

@interface _PointQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *nonSentinelPoints;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)effectiveStartIndexBasedOnLength;

@end
