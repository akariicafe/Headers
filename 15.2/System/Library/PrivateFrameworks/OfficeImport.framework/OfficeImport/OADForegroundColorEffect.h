@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}

- (void)setForegroundColor:(id)a0;
- (id)foregroundColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setStyleColor:(id)a0;

@end
