@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)toColor;
- (void)setFromColor:(id)a0;
- (void)setToColor:(id)a0;
- (id)fromColor;
- (void)setStyleColor:(id)a0;

@end
