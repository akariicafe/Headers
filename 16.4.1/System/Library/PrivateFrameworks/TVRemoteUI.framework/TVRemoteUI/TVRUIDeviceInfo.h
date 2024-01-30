@interface TVRUIDeviceInfo : NSObject

@property (class, readonly, nonatomic) TVRUIDeviceInfo *currentDeviceInfo;

@property (nonatomic) double volumeButtonHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } volumeButtonsRect;
@property (readonly, nonatomic, getter=isPad) BOOL pad;
@property (readonly, nonatomic, getter=hasHomeButton) BOOL homeButton;

- (id)init;
- (id)description;
- (void)_readPlistForParametersIfNeeded;
- (double)_volumeButtonsX;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_userIntentButtonRect;
- (id)_volumeButtonsDictionaryForSpecificHardware;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_volumeDownButtonRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_volumeUpButtonRect;
- (id)hardwareInfoForOrientation:(long long)a0;

@end
