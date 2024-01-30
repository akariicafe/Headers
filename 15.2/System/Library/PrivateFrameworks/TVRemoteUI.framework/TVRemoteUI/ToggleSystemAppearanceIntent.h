@class TVRDevice;

@interface ToggleSystemAppearanceIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (nonatomic) long long appearanceToggle;

@end
