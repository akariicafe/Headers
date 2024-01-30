@class NSSet, NSString, NSNumber;

@interface RMModelStatusAccountListGoogle : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusVisibleName;
@property (copy, nonatomic) NSString *statusUsername;
@property (copy, nonatomic) NSNumber *statusIsMailEnabled;
@property (copy, nonatomic) NSNumber *statusAreCalendarsEnabled;
@property (copy, nonatomic) NSNumber *statusAreContactsEnabled;
@property (copy, nonatomic) NSNumber *statusAreNotesEnabled;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 declarationIdentifier:(id)a1 visibleName:(id)a2 username:(id)a3 isMailEnabled:(id)a4 areCalendarsEnabled:(id)a5 areContactsEnabled:(id)a6 areNotesEnabled:(id)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
