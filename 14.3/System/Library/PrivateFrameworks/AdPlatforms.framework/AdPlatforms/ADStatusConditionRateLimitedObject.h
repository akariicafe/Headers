@class NSUUID, NSDate;

@interface ADStatusConditionRateLimitedObject : NSObject

@property (readonly, nonatomic) NSUUID *statusCondition;
@property (readonly, nonatomic) NSDate *setTime;
@property (readonly, nonatomic) long long operation;

- (void).cxx_destruct;
- (id)init:(id)a0 at:(id)a1 kind:(long long)a2;

@end
