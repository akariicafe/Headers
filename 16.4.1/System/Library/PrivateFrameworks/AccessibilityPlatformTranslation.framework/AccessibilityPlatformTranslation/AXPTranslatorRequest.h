@class AXPTranslationObject, NSDictionary;

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AXPTranslationObject *translation;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long attributeType;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) unsigned long long clientType;

+ (id)allowedDecodableClasses;
+ (id)requestWithTranslation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
