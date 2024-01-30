@class EDFetchController, NSString, EDPersistence, NSObject;
@protocol EDServerRemoteClientsProvider, OS_os_log, EFScheduler, EMDiagnosticInfoProvidingXPC;

@interface EDDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoGathererInterface>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EMDiagnosticInfoProvidingXPC> diagnosticInfoProvider;
@property (retain, nonatomic) id<EDServerRemoteClientsProvider> remoteClientsProvider;
@property (readonly, nonatomic) EDFetchController *fetchController;
@property (retain, nonatomic) id<EFScheduler> gathererQueue;
@property (retain, nonatomic) EDPersistence *persistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)databaseStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)fetchControllerStatusWithCompletionHandler:(id /* block */)a0;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)registerDiagnosticInfoProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithFetchController:(id)a0 remoteClientsProvider:(id)a1 persistence:(id)a2;

@end
