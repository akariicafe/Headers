@class GEOXPCActivity, NSMutableDictionary, NSDate, geo_isolater, NSObject;
@protocol OS_dispatch_source;

@interface GEORequestCountPowerLogger : NSObject {
    geo_isolater *_isolater;
    struct atomic_flag { _Atomic BOOL _Value; } _didRead;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    BOOL _isDirty;
    NSObject<OS_dispatch_source> *_writeTimer;
    GEOXPCActivity *_activity;
}

+ (id)sharedInstance;
+ (void)registerXPCActivity;

- (void)incrementCountForClient:(id)a0 requestType:(int)a1;
- (void)_terminationRequested:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
