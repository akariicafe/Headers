@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOverridden;
- (float)alpha;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
