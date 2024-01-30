@class INIntent, NSString, NSDateInterval, ATXAction;

@interface ATXIntentEvent : NSObject <NSSecureCoding, ATXLaunchEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, copy, nonatomic) ATXAction *action;
@property (copy, nonatomic) NSString *arg1;
@property (copy, nonatomic) NSString *arg2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endDate;
- (id)initWithBundleId:(id)a0 intentType:(id)a1 dateInterval:(id)a2 intent:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)startDate;
- (id)initWithBundleId:(id)a0 intentType:(id)a1 dateInterval:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXIntentEvent:(id)a0;
- (id)initWithBundleId:(id)a0 intentType:(id)a1 dateInterval:(id)a2 action:(id)a3;

@end
