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

- (void)enableTimeCoercion;
- (BOOL)isServiceRunning:(id)a0;
- (int)missBehavior;
- (id)setRecordingTriggerMap:(id)a0 outputPathBase:(id)a1;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)a0;
- (void)amendServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (void)retireServiceWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (BOOL)ensureServiceIsRunning:(id)a0;
- (id)proxyForService:(id)a0 forClient:(id)a1;
- (BOOL)isTimeCoercionEnabled;
- (void)dealloc;
- (id)proxyForService:(id)a0;
- (id)getServiceWithName:(id)a0;
- (BOOL)isServiceEnabled:(id)a0;

@end
