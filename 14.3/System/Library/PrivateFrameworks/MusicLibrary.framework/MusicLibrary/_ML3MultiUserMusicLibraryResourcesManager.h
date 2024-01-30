@class NSString, NSObject;
@protocol OS_dispatch_queue, MLMediaLibraryResourcesServiceProtocol;

@interface _ML3MultiUserMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <MLMediaLibraryAccountChangeObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<MLMediaLibraryResourcesServiceProtocol> libraryResourcesServices;
@property (copy, nonatomic) NSString *cachedLibraryContainerPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)libraryContainerPath;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void).cxx_destruct;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (id)initWithLibraryResourcesService:(id)a0;

@end
