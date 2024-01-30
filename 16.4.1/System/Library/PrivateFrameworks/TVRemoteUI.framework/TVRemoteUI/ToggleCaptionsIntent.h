@class TVRDevice;

@interface ToggleCaptionsIntent : INIntent

@property (nonatomic) long long toggle;
@property (copy, nonatomic) TVRDevice *device;

@end
