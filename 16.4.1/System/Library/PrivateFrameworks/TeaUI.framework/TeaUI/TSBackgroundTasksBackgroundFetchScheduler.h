@interface TSBackgroundTasksBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler> {
    void /* unknown type, empty encoding */ application;
    void /* unknown type, empty encoding */ taskIdentifier;
    void /* unknown type, empty encoding */ minimumBackgroundFetchInterval;
}

- (void)setMinimumBackgroundFetchInterval:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 taskIdentifier:(id)a1;
- (void)prepareForUseWithApplicationDelegate:(id)a0;

@end
