@class OADFill, NSArray;

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}

- (id)fill;
- (id)effects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;

@end
