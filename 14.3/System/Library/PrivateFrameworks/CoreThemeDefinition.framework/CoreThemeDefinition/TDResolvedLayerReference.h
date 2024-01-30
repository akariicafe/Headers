@class TDSimpleArtworkRenditionSpec, TDFlattenedImageRenditionSpec;

@interface TDResolvedLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDSimpleArtworkRenditionSpec *reference;
@property (retain, nonatomic) TDFlattenedImageRenditionSpec *stack;

@end
