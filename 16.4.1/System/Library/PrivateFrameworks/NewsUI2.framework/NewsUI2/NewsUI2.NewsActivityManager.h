@interface NewsUI2.NewsActivityManager : NSObject <TSNewsActivityManagerType> {
    void /* unknown type, empty encoding */ newsUserActivityManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearAllSavedUserActivities;
- (void)deregisterActivityWithData:(id)a0;
- (void)registerCurrentActivityWithData:(id)a0;

@end
