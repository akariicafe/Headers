@interface PFStorageAnalyticsCalculator : NSObject {
    void /* unknown type, empty encoding */ managedObjectContext;
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ analyticsTask;
}

@property (class, nonatomic, readonly) PFStorageAnalyticsCalculator *live;

- (id)init;
- (void).cxx_destruct;
- (void)reportStorageUse;

@end
