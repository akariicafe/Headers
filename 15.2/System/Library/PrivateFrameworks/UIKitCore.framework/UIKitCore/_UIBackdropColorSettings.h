@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject

@property (nonatomic) _UIBackdropViewSettings *parentSettings;
@property (nonatomic) BOOL hasObservedValues;
@property (nonatomic) double averageHue;
@property (nonatomic) double averageSaturation;
@property (nonatomic) double averageBrightness;
@property (nonatomic) double contrast;
@property (readonly, nonatomic) UIColor *color;

- (void)setDefaultValues;
- (BOOL)applyCABackdropLayerStatistics:(id)a0;
- (void)setValuesFromModel:(id)a0;

@end
