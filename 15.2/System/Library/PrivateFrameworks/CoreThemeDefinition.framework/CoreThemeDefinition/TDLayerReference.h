@class TDLayerStackRenditionSpec, TDNamedArtworkProduction;

@interface TDLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDNamedArtworkProduction *reference;
@property (retain, nonatomic) TDLayerStackRenditionSpec *stack;

- (id)cuiLayerReference;

@end
