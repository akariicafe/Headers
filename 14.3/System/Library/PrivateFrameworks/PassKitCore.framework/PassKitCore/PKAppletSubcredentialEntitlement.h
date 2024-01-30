@class NSString;

@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long value;
@property (copy, nonatomic) NSString *descriptionKey;
@property (copy, nonatomic) NSString *longDescriptionKey;
@property (nonatomic, getter=isNativelySupported) BOOL nativelySupported;

- (id)defaultLongDescription;
- (id)defaultDescription;
- (id)localizedLongDescriptionWithPass:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)localizedDescriptionWithPass:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
