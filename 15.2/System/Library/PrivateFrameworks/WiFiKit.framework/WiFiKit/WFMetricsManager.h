@class NSString, NSMutableDictionary, NSObject, AWDServerConnection;
@protocol OS_dispatch_queue;

@interface WFMetricsManager : NSObject

@property (retain, nonatomic) AWDServerConnection *server;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (copy, nonatomic) NSString *processName;
@property (retain, nonatomic) NSMutableDictionary *ssidHashes;

+ (id)sharedManager;

- (void)processEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_submitAWDEvent:(id)a0;
- (void)_submitCAEvent:(id)a0;
- (id)SHAForSSID:(id)a0;

@end
