@class NSString;

@interface TIStatisticKey : NSObject

@property (readonly, nonatomic) NSString *counterName;
@property (readonly, nonatomic) NSString *aggdName;
@property (readonly, nonatomic) NSString *inputMode;

+ (id)statisticKeyWithAggdName:(id)a0 andCounterName:(id)a1 andInputMode:(id)a2;

- (id)initWithAggdName:(id)a0 andCounterName:(id)a1 andInputMode:(id)a2;
- (void).cxx_destruct;

@end
