@class NSUUID, NSDate;

@interface ADStatusConditionRateLimitedObject : NSObject

@property (readonly, nonatomic) NSUUID *statusCondition;
@property (readonly, nonatomic) NSDate *setTime;
@property (readonly, nonatomic) long long operation;

- (id)init:(id)a0 at:(id)a1 kind:(long long)a2;
- (void).cxx_destruct;

@end
