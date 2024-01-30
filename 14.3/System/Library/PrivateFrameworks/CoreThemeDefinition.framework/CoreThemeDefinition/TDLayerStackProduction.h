@class TDSimpleArtworkElementProduction, TDNamedArtworkProduction;

@interface TDLayerStackProduction : TDNamedArtworkProduction

@property (retain, nonatomic) TDNamedArtworkProduction *flattenedImageProduction;
@property (retain, nonatomic) TDSimpleArtworkElementProduction *radiosityImageProduction;

@end
