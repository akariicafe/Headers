@interface MUPlaceTileMeasurements : NSObject

@property (nonatomic) double tileWidth;
@property (nonatomic) double maxTitleHeight;
@property (nonatomic) double maxSubtitleHeight;
@property (nonatomic) double maxFooterHeight;
@property (nonatomic) double deviceScale;

+ (id)defaultMeasurements;

@end
