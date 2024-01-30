@class NSSet, NSString, NSNumber;

@interface RMModelStatusAccountIncomingMail : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusVisibleName;
@property (copy, nonatomic) NSString *statusHostname;
@property (copy, nonatomic) NSNumber *statusPort;
@property (copy, nonatomic) NSString *statusUsername;
@property (copy, nonatomic) NSNumber *statusAuthenticated;
@property (copy, nonatomic) NSNumber *statusIsMailEnabled;
@property (copy, nonatomic) NSNumber *statusAreNotesEnabled;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 hostname:(id)a2 port:(id)a3 username:(id)a4 authenticated:(id)a5 isMailEnabled:(id)a6 areNotesEnabled:(id)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
