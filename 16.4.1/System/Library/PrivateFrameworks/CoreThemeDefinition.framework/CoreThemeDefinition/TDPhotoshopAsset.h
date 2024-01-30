@class NSSet;

@interface TDPhotoshopAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)production;
- (id)_activeProductionWithRenditionsInProductions:(id)a0;
- (id)_productionWithRenditionsInProductions:(id)a0;
- (id)copyDataFromAttributes;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (void)setAttributesFromCopyData:(id)a0;

@end
