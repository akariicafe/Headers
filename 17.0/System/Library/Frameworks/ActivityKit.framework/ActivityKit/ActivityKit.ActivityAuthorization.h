@interface ActivityKit.ActivityAuthorization : NSObject {
    void /* unknown type, empty encoding */ authorizationClient;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)areActivitiesEnabledForBundleId:(id)a0;
- (BOOL)areFrequentPushesEnabledFor:(id)a0;
- (BOOL)setActivitiesWithEnabled:(BOOL)a0 for:(id)a1 source:(long long)a2 error:(id *)a3;
- (BOOL)setActivitiesWithEnabled:(BOOL)a0 forBundleId:(id)a1 error:(id *)a2;
- (BOOL)setFrequentPushesWithEnabled:(BOOL)a0 for:(id)a1 error:(id *)a2;

@end
