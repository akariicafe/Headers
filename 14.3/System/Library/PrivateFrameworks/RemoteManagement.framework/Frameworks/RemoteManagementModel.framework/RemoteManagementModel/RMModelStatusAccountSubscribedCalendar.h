@class NSSet, NSString, NSNumber;

@interface RMModelStatusAccountSubscribedCalendar : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusVisibleName;
@property (copy, nonatomic) NSString *statusCalendarUrl;
@property (copy, nonatomic) NSString *statusUsername;
@property (copy, nonatomic) NSNumber *statusAuthenticated;
@property (copy, nonatomic) NSNumber *statusIsEnabled;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 calendarUrl:(id)a2 username:(id)a3 authenticated:(id)a4 isEnabled:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
