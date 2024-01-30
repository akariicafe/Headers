@class NPSManager;

@interface NPHCountryCodeCompanionReplication : NSObject {
    NPSManager *_npsManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateActiveCountryCode;
- (void)_updateHomeCountryCode;
- (void)_updateNetworkCountryCode;
- (void)_updateAndBroadcastCodeWithKey:(id)a0 usingFunction:(void /* function */ *)a1;

@end
