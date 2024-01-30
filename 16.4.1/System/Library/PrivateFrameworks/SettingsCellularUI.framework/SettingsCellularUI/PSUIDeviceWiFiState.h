@interface PSUIDeviceWiFiState : NSObject

+ (id)sharedInstance;

- (id)getLogger;
- (id)initPrivate;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (BOOL)isConnectedOverWiFi;

@end
