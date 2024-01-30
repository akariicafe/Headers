@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}

- (id)foregroundColor;
- (void)setForegroundColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setStyleColor:(id)a0;

@end
