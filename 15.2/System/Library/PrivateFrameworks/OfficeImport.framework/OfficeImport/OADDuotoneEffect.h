@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

- (id)color1;
- (id)color2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setColor1:(id)a0;
- (void)setColor2:(id)a0;
- (void)setTransferMode1:(int)a0;
- (void)setTransferMode2:(int)a0;
- (void)setStyleColor:(id)a0;
- (int)transferMode1;
- (int)transferMode2;

@end
