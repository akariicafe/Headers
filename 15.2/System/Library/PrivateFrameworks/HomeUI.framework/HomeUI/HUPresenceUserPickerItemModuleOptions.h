@class HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserPickerItemModuleOptions : NSObject

@property (readonly, nonatomic) HUPresenceCurrentUserLocationDevice *locationDevice;
@property (readonly, nonatomic) BOOL customLocationSelected;

- (void).cxx_destruct;
- (id)initWithLocationDevice:(id)a0 customLocationSelected:(BOOL)a1;

@end
