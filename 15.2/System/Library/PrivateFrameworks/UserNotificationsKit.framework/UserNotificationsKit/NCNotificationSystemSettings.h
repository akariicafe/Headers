@class NSArray, NSString;

@interface NCNotificationSystemSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled;
@property (readonly, nonatomic, getter=isScheduledDeliveryUninitialized) BOOL scheduledDeliveryUninitialized;
@property (readonly, nonatomic, getter=shouldScheduledDeliveryShowNextSummary) BOOL scheduledDeliveryShowNextSummary;
@property (readonly, copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithNotificationSystemSettings:(id)a0;

@end
