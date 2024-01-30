@class OADFill, NSArray;

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}

- (id)fill;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)effects;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;

@end
