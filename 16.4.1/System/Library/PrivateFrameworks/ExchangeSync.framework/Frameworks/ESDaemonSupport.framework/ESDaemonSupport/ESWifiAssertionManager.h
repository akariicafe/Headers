@interface ESWifiAssertionManager : NSObject {
    int _refCount;
}

+ (struct __WiFiManagerClient { } *)_getWiFiClientRef;
+ (id)sharedWifiAssertionManager;

- (void)releaseWifiAssertion;
- (void)retainWifiAssertion;

@end
