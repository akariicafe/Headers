@interface WLWiFiManager : NSObject

@property (nonatomic) struct __WiFiManagerClient { } *ref;
@property (readonly, nonatomic) BOOL isTetheringSupported;

- (void)disable;
- (void)enable;
- (id)init;
- (void)dealloc;
- (id)createDeviceClient;

@end
