@class NSString, NSMutableDictionary, NSDate, NSObject, GEOXPCActivity;
@protocol OS_dispatch_queue;

@interface GEORequestCountPowerLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_eventName;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    GEOXPCActivity *_activity;
}

+ (id)sharedInstance;
+ (void)cancelOldActivities;
+ (BOOL)shouldIgnoreRequestType:(int)a0 fromClientWithId:(id)a1;

- (void)_scheduleXpcActivity;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelXpcActivity;
- (void)dealloc;
- (void)incrementCountForClient:(id)a0 requestType:(int)a1;
- (void)startNewSessionWithName:(id)a0;
- (void)_flushToPowerLog;

@end
