@class NSSet;

@interface TDPhotoshopAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)production;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (id)_activeProductionWithRenditionsInProductions:(id)a0;
- (id)_productionWithRenditionsInProductions:(id)a0;

@end
