@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (BOOL)isOverridden;
- (id)description;
- (float)alpha;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
