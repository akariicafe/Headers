@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)toColor;
- (id)fromColor;
- (void)setFromColor:(id)a0;
- (void)setToColor:(id)a0;
- (void)setStyleColor:(id)a0;

@end
