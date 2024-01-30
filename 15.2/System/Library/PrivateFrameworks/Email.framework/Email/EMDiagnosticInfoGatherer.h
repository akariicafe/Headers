@class NSObject, NSString, EMRemoteConnection, EFLocked;
@protocol OS_os_log, EFScheduler, EFCancelable;

@interface EMDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoProvidingXPC> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _providerCancelableLock;
    _Atomic BOOL _hasRegisteredAsDiagnosticProvider;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EFLocked *providers;
@property (retain, nonatomic) EMRemoteConnection *connection;
@property (retain, nonatomic) id<EFScheduler> providerQueue;
@property (retain, nonatomic) id<EFCancelable> providerCancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (id)localDiagnosticsDirectoryURL;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRemoteConnection:(id)a0;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchControllerStatusWithCompletionHandler:(id /* block */)a0;
- (void)databaseStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)_registerSelfAsProviderIfRequired;
- (void)provideDiagnosticsAt:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_moveLocalDiagnosticsTo:(id)a0;
- (id)registerDiagnosticInfoProvider:(id)a0;

@end
