@class NSObject, CRKValidXPCConnectionProvider;
@protocol OS_dispatch_queue;

@interface CRKNonCatalystStudentDaemonProxy : NSObject <CRKStudentDaemonXPCInterface>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (id)initWithCallbackQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchAdHocConfiguration:(id /* block */)a0;
- (void)_fetchConfiguration:(id /* block */)a0;
- (void)_fetchConfigurationType:(id /* block */)a0;
- (void)_fetchResourceFromURL:(id)a0 completion:(id /* block */)a1;
- (void)_fetchSetOfActiveRestrictionUUIDsForClientType:(id)a0 completion:(id /* block */)a1;
- (void)_setActiveStudentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setAdHocConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_setConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_studentDidAuthenticate:(id)a0 completion:(id /* block */)a1;
- (void)fetchAdHocConfiguration:(id /* block */)a0;
- (void)fetchConfiguration:(id /* block */)a0;
- (void)fetchConfigurationType:(id /* block */)a0;
- (void)fetchResourceFromURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchSetOfActiveRestrictionUUIDsForClientType:(id)a0 completion:(id /* block */)a1;
- (void)setActiveStudentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setAdHocConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)setOfActiveRestrictionUUIDs:(id)a0;
- (void)studentDidAuthenticate:(id)a0 completion:(id /* block */)a1;

@end
