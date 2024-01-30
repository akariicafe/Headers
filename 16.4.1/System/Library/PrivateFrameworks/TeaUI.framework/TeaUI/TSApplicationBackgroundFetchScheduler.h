@interface TSApplicationBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler> {
    void /* unknown type, empty encoding */ application;
}

- (id)initWithApplication:(id)a0;
- (void)setMinimumBackgroundFetchInterval:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForUseWithApplicationDelegate:(id)a0;

@end
