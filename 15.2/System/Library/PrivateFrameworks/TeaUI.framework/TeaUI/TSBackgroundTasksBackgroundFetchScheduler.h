@interface TSBackgroundTasksBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler> {
    void /* unknown type, empty encoding */ application;
    void /* unknown type, empty encoding */ taskIdentifier;
    void /* unknown type, empty encoding */ minimumBackgroundFetchInterval;
}

- (void).cxx_destruct;
- (id)init;
- (void)setMinimumBackgroundFetchInterval:(double)a0;
- (void)prepareForUseWithApplicationDelegate:(id)a0;
- (id)initWithApplication:(id)a0 taskIdentifier:(id)a1;

@end
