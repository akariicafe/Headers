@interface RequestDispatcherBridges.CDMClientNotification : NSObject <CDMClientDelegate, CDMTrialAssetsDelegate> {
    void /* unknown type, empty encoding */ cdmProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)assetsAvailable;
- (void)assetsAvailableForLocale:(id)a0;
- (void)assetsUnavailable;
- (void)processCDMNluRequestCallback:(id)a0;
- (void)processCDMNluRequestErrorCallback:(id)a0 error:(id)a1;

@end
