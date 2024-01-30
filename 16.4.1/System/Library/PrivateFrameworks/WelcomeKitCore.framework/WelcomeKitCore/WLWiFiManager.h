@interface WLWiFiManager : NSObject

@property (nonatomic) struct __WiFiManagerClient { } *ref;
@property (readonly, nonatomic) BOOL isTetheringSupported;

- (void)enable;
- (void)disable;
- (void)dealloc;
- (id)init;
- (id)createDeviceClient;

@end
