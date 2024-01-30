@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id propertyList;

+ (id)identifierWithAction:(SEL)a0 propertyList:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAction:(SEL)a0 propertyList:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
