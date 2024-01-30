@class NSString;
@protocol MLMediaLibraryResourcesServiceProtocol, MLMediaLibraryAccountChangeObserver, _MSVAccountInformationProviding;

@interface ML3MusicLibraryResourcesManagerContext : NSObject

@property (readonly, nonatomic, getter=isRunningInDaemon) BOOL runningInDaemon;
@property (readonly, nonatomic, getter=isMultiUserSupported) BOOL multiUserSupported;
@property (readonly, nonatomic) id<MLMediaLibraryResourcesServiceProtocol> resourcesService;
@property (readonly, nonatomic) id<_MSVAccountInformationProviding> accountInfo;
@property (readonly, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (readonly, nonatomic) NSString *libraryContainerIdentifier;

+ (id)contextForAutoupdatingSharedLibrary;
+ (id)contextForSingleUserLibraryWithAccountInfo:(id)a0;
+ (id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)a0;
+ (id)contextForMultiUserFrameworkLibraryWithService:(id)a0;
+ (id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)a0 accountChangeObserver:(id)a1;

- (id)_initWithResourcesService:(id)a0 accountInfo:(id)a1 libraryContainerIdentifier:(id)a2 accountChangeObserver:(id)a3 supportsMultiUsers:(BOOL)a4 runningInDaemon:(BOOL)a5;
- (void).cxx_destruct;

@end
