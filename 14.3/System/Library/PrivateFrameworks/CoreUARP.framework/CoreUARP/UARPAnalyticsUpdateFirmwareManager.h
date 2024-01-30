@class NSObject, UARPController, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPAnalyticsUpdateFirmwareManager : NSObject {
    UARPController *_controller;
    NSMutableArray *_stateArray;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_purgeTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)configurePurgeTimer;
- (void)purgeStaleUpdateStateRecords;
- (id)updateStateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)updateComplete:(id)a0;
- (id)updateStatesForAccessoryID:(id)a0;
- (id)initWithController:(id)a0 queue:(id)a1;
- (void)stagingStartedForAccessoryID:(id)a0 assetID:(id)a1 userIntent:(BOOL)a2;
- (void)stagingCompleteForAccessoryID:(id)a0 assetID:(id)a1 status:(unsigned long long)a2;
- (void)setAccessoryIDUnreachable:(id)a0;

@end
