@interface ESWifiAssertionManager : NSObject {
    int _refCount;
}

+ (struct __WiFiManagerClient { } *)_getWiFiClientRef;
+ (id)sharedWifiAssertionManager;

- (void)retainWifiAssertion;
- (void)releaseWifiAssertion;

@end
