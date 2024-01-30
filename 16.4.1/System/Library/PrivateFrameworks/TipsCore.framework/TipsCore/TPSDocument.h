@class NSString, NAIdentity, NSArray, TPSWidgetContent, TPSAssetFileInfoManager, TPSNotification;

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSString *userLanguageCode;
@property (copy, nonatomic) NSArray *keywords;
@property (nonatomic) long long lastModifiedDate;
@property (copy, nonatomic) NSString *clientConditionID;
@property (copy, nonatomic) TPSWidgetContent *widgetContent;
@property (copy, nonatomic) TPSAssetFileInfoManager *assetFileInfoManager;
@property (readonly, nonatomic, getter=isWelcome) BOOL welcome;
@property (readonly, nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (readonly, nonatomic, getter=isSoftwareWelcome) BOOL softwareWelcome;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *clonedFromID;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) TPSNotification *notification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLWithTipIdentifier:(id)a0 collectionIdentifier:(id)a1 referrer:(id)a2;
+ (id)contentDictionaryForDictionary:(id)a0 fromMatchingClientConditions:(id)a1;
+ (id)deliveryInfoForDictionary:(id)a0;
+ (id)deliveryInfoIdForDictionary:(id)a0;
+ (id)documentsForDictionary:(id)a0;
+ (id)fileIdMapForDictionary:(id)a0;
+ (void)getValuesFromOpenURLSchemeQueryItems:(id)a0 tipIdentifier:(id *)a1 collectionIdentifier:(id *)a2 referrer:(id *)a3;

- (id)initWithDictionary:(id)a0 metadata:(id)a1 identifierKey:(id)a2;
- (BOOL)hasWidgetContent;
- (id)URLWithReferrer:(id)a0;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
