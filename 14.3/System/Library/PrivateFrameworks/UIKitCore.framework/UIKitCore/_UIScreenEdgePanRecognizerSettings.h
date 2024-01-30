@class NSString, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings, _UIScreenEdgePanRecognizerCornerSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings

@property (copy, nonatomic) NSString *multitaskingGestureMode;
@property (copy, nonatomic) NSString *navigationGestureMode;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;

@end
