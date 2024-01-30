@class NSString;

@interface MTSnapshotScheduler : NSObject {
    NSString *_bundleID;
}

+ (double)_quiescingWindow;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (void)_performScheduleSnapshot;
- (void)scheduleSnapshot;

@end
