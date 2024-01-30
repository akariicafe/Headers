@class NSString;

@interface NTKComplication : CLKCComplication <NTKComplicationItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ntk_identifier;
@property (readonly, nonatomic) NSString *ntk_sectionIdentifier;
@property (readonly, nonatomic) unsigned long long ntk_itemType;
@property (readonly, nonatomic) NSString *ntk_contactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) unsigned long long complicationType;

+ (id)anyComplicationOfType:(unsigned long long)a0;
+ (id)allComplicationsOfType:(unsigned long long)a0;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (id)nullComplication;
+ (Class)_complicationClassForType:(unsigned long long)a0;
+ (id)complicationWithJSONObjectRepresentation:(id)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)JSONObjectRepresentation;
- (id)localizedSectionHeaderName;
- (id)ntk_localizedNameWithOptions:(unsigned long long)a0 forRichComplicationSlot:(BOOL)a1;
- (id)initWithComplicationType:(unsigned long long)a0;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_initWithComplicationType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (id)localizedKeylineLabelText;
- (id)localizedDetailText;
- (BOOL)appearsInDailySnapshotForFamily:(long long)a0;
- (id)customDailySnapshotKeyForFamily:(long long)a0 device:(id)a1;
- (BOOL)snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;
- (id)localizedRichDetailText;
- (void)handleAddedFromFaceSharing;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;
- (id)_generateAppIdentifier;
- (void)_handleAddedFromFaceSharing;
- (id)localizedRichKeylineLabelText;
- (void)_setComplicationType:(unsigned long long)a0;

@end
