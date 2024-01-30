@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings

@property (copy, nonatomic) FPItemID *enumeratedItemID;
@property (nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration;
@property (nonatomic) BOOL wantsDirectExtensionEnumeration;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
