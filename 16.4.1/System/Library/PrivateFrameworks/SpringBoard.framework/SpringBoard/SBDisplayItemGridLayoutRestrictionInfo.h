@interface SBDisplayItemGridLayoutRestrictionInfo : NSObject {
    unsigned long long _cachedHash;
}

@property (readonly, nonatomic) unsigned long long layoutRestrictions;
@property (readonly, nonatomic) struct CGSize { double width; double height; } restrictedSize;

+ (id)layoutRestrictionInfoWithLayoutRestrictions:(unsigned long long)a0 restrictedSize:(struct CGSize { double x0; double x1; })a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)_initWithLayoutRestrictions:(unsigned long long)a0 restrictedSize:(struct CGSize { double x0; double x1; })a1;

@end
