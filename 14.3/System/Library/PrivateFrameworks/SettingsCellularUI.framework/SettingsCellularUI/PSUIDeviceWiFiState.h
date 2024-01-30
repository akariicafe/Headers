@interface PSUIDeviceWiFiState : NSObject

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (BOOL)isConnectedOverWiFi;

@end
