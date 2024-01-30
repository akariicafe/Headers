@class NSSet, NSString, NSArray, NSNumber;

@interface CEMPredicateWeeklyTimeRange : CEMPredicateBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCalendarIdentifier;
@property (copy, nonatomic) NSNumber *payloadStartDay;
@property (copy, nonatomic) NSString *payloadStartTime;
@property (copy, nonatomic) NSNumber *payloadEndDay;
@property (copy, nonatomic) NSString *payloadEndTime;
@property (copy, nonatomic) NSArray *payloadNotificationTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithCalendarIdentifier:(id)a0 withStartDay:(id)a1 withStartTime:(id)a2 withEndDay:(id)a3 withEndTime:(id)a4 withNotificationTimes:(id)a5;
+ (id)buildRequiredOnlyWithStartDay:(id)a0 withStartTime:(id)a1 withEndDay:(id)a2 withEndTime:(id)a3;

@end
