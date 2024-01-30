@class VCDaemonXPCEventHandler, NSSet, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCDaemonSyncDataEndpoint : NSObject <VCSyncDataEndpoint>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (readonly, nonatomic) NSMutableSet *mutableSyncDataHandlers;
@property (readonly, nonatomic) NSSet *syncDataHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;

@end
