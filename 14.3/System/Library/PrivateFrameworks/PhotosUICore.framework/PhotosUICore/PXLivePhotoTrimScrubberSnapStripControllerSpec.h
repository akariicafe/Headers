@class UIColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject

@property (retain, nonatomic) UIColor *disabledColor;
@property (retain, nonatomic) UIColor *currentPositionMarkerColor;
@property (retain, nonatomic) UIColor *originalPositionMarkerColor;
@property (retain, nonatomic) UIColor *suggestedMarkerColor;
@property (nonatomic) BOOL alwaysShowKeyTime;
@property (nonatomic) BOOL showDefaultKeyTime;

- (id)init;
- (void).cxx_destruct;

@end
