@class NSNumber;

@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject

@property (retain, nonatomic) NSNumber *overrideSizeSubclass;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double interitemSpacingForExtraSmallControlSize;
@property (nonatomic) double interitemSpacingForSmallControlSize;
@property (nonatomic) double interitemSpacingForRegularControlSize;
@property (nonatomic) double interitemSpacingForLargeControlSize;
@property (nonatomic) double minimumSectionSpacing;
@property (nonatomic) double minimumNavBarToControlsSpacing;
@property (nonatomic) double minimumSectionToSensorSectionSpacing;
@property (nonatomic) double thermostatSectionSpacingOverride;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) unsigned long long titlePosition;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;
@property (readonly, nonatomic) long long viewSizeSubclass;

+ (id)defaultOptions;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)initWithViewSize:(struct CGSize { double x0; double x1; })a0;

@end
