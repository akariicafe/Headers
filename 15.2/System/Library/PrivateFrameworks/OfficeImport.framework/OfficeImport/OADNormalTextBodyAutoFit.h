@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFontScalePercent:(float)a0 lineSpacingReductionPercent:(float)a1;
- (float)fontScalePercent;
- (float)lineSpacingReductionPercent;

@end
