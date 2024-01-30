@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {
    NSMutableDictionary *_catalog;
    NSDictionary *_serviceReplacementMap;
    NSMutableSet *_unavailableServiceNames;
    NSMutableSet *_timeCoercibleSilos;
    int _missBehavior;
    double _currentGlobalLatchedAbsoluteTimestamp;
    NSMutableDictionary *_recordingFromTriggersByTo;
    NSMutableDictionary *_recordingToTriggersByFrom;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)rereadConfiguration:(id)a0;

- (id)init;
- (BOOL)isServiceRunning:(id)a0;
- (void).cxx_destruct;
- (BOOL)ensureServiceIsRunning:(id)a0;
- (void)dealloc;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)a0;
- (void)enableTimeCoercion;
- (void)amendServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (id)getServiceWithName:(id)a0;
- (void)retireServiceWithName:(id)a0;
- (int)missBehavior;
- (BOOL)isTimeCoercionEnabled;
- (void)setServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (id)setRecordingTriggerMap:(id)a0 outputPathBase:(id)a1;
- (id)proxyForService:(id)a0;
- (BOOL)isServiceEnabled:(id)a0;
- (id)proxyForService:(id)a0 forClient:(id)a1;

@end
