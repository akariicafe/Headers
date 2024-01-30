@class NSDate, NSCalendar, NSString, NSLock, BKSApplicationStateMonitor, NSDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol TIKeyboardApplicationStateResponses;

@interface TIKeyboardApplicationStateMonitor : NSObject {
    double _appActivityTimeDurationThreshold;
    double _appActivityKeyboardUsageFractionThreshold;
}

@property (retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor;
@property (retain, nonatomic) NSString *activeAppBundleID;
@property (nonatomic) double activeAppStartTime;
@property (retain, nonatomic) NSMutableSet *foregroundApps;
@property (retain, nonatomic) NSDate *activeAppStartDate;
@property (retain, nonatomic) NSDictionary *applicationStateDatabase;
@property (retain, nonatomic) NSMutableSet *imSuppressingBundleIDs;
@property (retain, nonatomic) NSLock *activeStateDataLock;
@property (retain, nonatomic) NSLock *databaseInUseLock;
@property (retain, nonatomic) NSDate *timeOfLastFlushToDisk;
@property (retain, nonatomic) NSCalendar *utcCalendar;
@property (retain, nonatomic) NSMutableArray *keyboardUsageTimes;
@property (nonatomic) double activeKeyboardStartTime;
@property (weak, nonatomic) NSObject<TIKeyboardApplicationStateResponses> *delegate;

- (void)startANewKeyboardActivity:(id)a0;
- (id)initWithAppActivityTimeDurationThreshold:(double)a0 keyboardUsageFractionThreshold:(double)a1;
- (BOOL)threadUnsafeFlushChangesToDiskWithImmediacy:(BOOL)a0;
- (void)keyboardNoLongerInUse;
- (void)dealloc;
- (void)handleApplicationStateChange:(id)a0;
- (void)keyboardInUse;
- (id)databaseLocation;
- (BOOL)flushPendingChangesToDisk;
- (void)logOutKeyboardActivity:(double)a0;
- (id)init;
- (void)applicationUninstalled:(id)a0;
- (BOOL)ignoreAppExtension:(id)a0;
- (void).cxx_destruct;

@end
