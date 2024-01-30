@interface _CNBufferingStrategy : NSObject

+ (id)strategyWithCapacity:(unsigned long long)a0;
+ (id)strategyWithTimeInterval:(double)a0 scheduler:(id)a1;
+ (id)combine:(id)a0;

@end
