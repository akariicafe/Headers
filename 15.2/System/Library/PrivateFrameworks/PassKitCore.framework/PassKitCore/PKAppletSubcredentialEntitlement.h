@class NSString;

@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long value;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *descriptionKey;
@property (copy, nonatomic) NSString *longDescriptionKey;
@property (nonatomic, getter=isNativelySupported) BOOL nativelySupported;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithPass:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)defaultLongDescription;
- (id)defaultDescription;
- (id)localizedLongDescriptionWithPass:(id)a0;

@end
