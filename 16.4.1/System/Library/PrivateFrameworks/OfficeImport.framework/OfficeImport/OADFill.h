@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (BOOL)isOverridden;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (float)alpha;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
