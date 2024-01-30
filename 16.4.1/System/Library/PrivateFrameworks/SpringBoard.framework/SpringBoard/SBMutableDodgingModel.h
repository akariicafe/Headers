@class NSMutableArray;

@interface SBMutableDodgingModel : SBDodgingModel

@property (retain, nonatomic) NSMutableArray *identifiers;

- (void)removeIdentifier:(id)a0;
- (void)setReferenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addIdentifier:(id)a0 atIndex:(unsigned long long)a1 center:(struct CGPoint { double x0; double x1; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)bringIdentifierToFront:(id)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0 forIdentifier:(id)a1;
- (void)setIndex:(unsigned long long)a0 forIdentifier:(id)a1;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forIdentifier:(id)a1;

@end
