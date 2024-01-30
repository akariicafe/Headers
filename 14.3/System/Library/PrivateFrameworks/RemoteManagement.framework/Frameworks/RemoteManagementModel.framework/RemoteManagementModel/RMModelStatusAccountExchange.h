@class NSSet, NSString, NSNumber;

@interface RMModelStatusAccountExchange : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusVisibleName;
@property (copy, nonatomic) NSString *statusHostname;
@property (copy, nonatomic) NSNumber *statusPort;
@property (copy, nonatomic) NSString *statusUsername;
@property (copy, nonatomic) NSNumber *statusAuthenticated;
@property (copy, nonatomic) NSNumber *statusIsMailEnabled;
@property (copy, nonatomic) NSNumber *statusAreCalendarsEnabled;
@property (copy, nonatomic) NSNumber *statusAreContactsEnabled;
@property (copy, nonatomic) NSNumber *statusAreNotesEnabled;
@property (copy, nonatomic) NSNumber *statusAreRemindersEnabled;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 hostname:(id)a2 port:(id)a3 username:(id)a4 authenticated:(id)a5 isMailEnabled:(id)a6 areCalendarsEnabled:(id)a7 areContactsEnabled:(id)a8 areNotesEnabled:(id)a9 areRemindersEnabled:(id)a10;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
