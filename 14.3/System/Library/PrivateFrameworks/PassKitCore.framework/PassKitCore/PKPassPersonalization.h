@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long requiredPersonalizationFields;
@property (readonly, nonatomic) NSString *termsAndConditions;
@property (readonly, nonatomic) NSString *localizedDescription;

+ (id)passPersonalizationWithPassBundle:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
