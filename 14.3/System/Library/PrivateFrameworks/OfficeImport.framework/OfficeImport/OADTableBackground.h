@class NSString, OADFill, NSArray;

@interface OADTableBackground : NSObject <OADEffectsParent> {
    OADFill *mFill;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fill;
- (void).cxx_destruct;
- (BOOL)hasEffects;
- (id)effects;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;

@end
