@class NSString, NAIdentity, TPSNotification;

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSString *userLanguageCode;
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

+ (id)documentsForDictionary:(id)a0;
+ (id)deliveryInfoForDictionary:(id)a0;
+ (id)deliveryInfoIdForDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1 identifierKey:(id)a2;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1;

@end
