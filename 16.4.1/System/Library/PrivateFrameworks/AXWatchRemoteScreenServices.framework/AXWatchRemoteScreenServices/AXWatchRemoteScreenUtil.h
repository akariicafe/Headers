@class NSString;

@interface AXWatchRemoteScreenUtil : NSObject {
    void /* unknown type, empty encoding */ caSessionIntervalEvent;
    void /* unknown type, empty encoding */ caSessionIntervalKey;
    void /* unknown type, empty encoding */ caErrorEvent;
    void /* unknown type, empty encoding */ caErrorKey;
    void /* unknown type, empty encoding */ caInactiveEvent;
    void /* unknown type, empty encoding */ caInactiveKey;
}

@property (class, nonatomic, readonly) AXWatchRemoteScreenUtil *sharedInstance;
@property (class, nonatomic, readonly) NSString *AXWatchRemoteScreenFeatureDomain;
@property (class, nonatomic, readonly) NSString *AXWatchRemoteScreenFeatureKey;

@property (nonatomic, readonly) NSString *caSessionIntervalEvent;
@property (nonatomic, readonly) NSString *caSessionIntervalKey;
@property (nonatomic, readonly) NSString *caErrorEvent;
@property (nonatomic, readonly) NSString *caErrorKey;
@property (nonatomic, readonly) NSString *caInactiveEvent;
@property (nonatomic, readonly) NSString *caInactiveKey;

- (id)init;
- (id)localizedStringWithKey:(id)a0;
- (void).cxx_destruct;
- (id)pairedGizmoName;
- (id)currentPairedGizmo;
- (BOOL)isPairedGizmoHasStingSupport;
- (BOOL)isPairedGizmoSupported;
- (BOOL)isPairedGizmoSupportedWithDeviceID:(id)a0;
- (BOOL)isTwiceFeatureOn;
- (id)localizedStingStringWithKey:(id)a0;
- (void)logInactiveSession;
- (void)logSessionErrorWithErrorName:(id)a0;
- (void)logSessionIntervalBeforeDate:(id)a0 afterDate:(id)a1;

@end
