@interface CARPrototypeBoolPref : CARPrototypePref

@property (readonly, nonatomic) BOOL invertValueForState;
@property (readonly, nonatomic) BOOL valueBool;
@property (readonly, nonatomic) BOOL cachedValueBool;

+ (id)prefWithDomain:(id)a0 key:(id)a1 title:(id)a2 invertValueForState:(BOOL)a3 valueChangedBlock:(id /* block */)a4;

- (void)setState:(BOOL)a0;
- (BOOL)state;
- (id)description;
- (BOOL)cachedState;
- (void)setCachedState:(BOOL)a0;

@end
