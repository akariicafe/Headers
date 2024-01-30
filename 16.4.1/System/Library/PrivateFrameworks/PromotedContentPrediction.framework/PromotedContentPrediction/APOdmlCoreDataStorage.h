@class NSPersistentContainer, NSError;

@interface APOdmlCoreDataStorage : NSObject

@property (nonatomic) int numLaunchesAttempted;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSError *coreDataError;
@property (nonatomic) BOOL coreDataIsInitialized;

- (id)init;
- (void).cxx_destruct;
- (void)launchContainer;
- (void)makeApplicationSupportDirectory;
- (void)createContainer;
- (void)initializeCoreDataStackForClient;
- (void)initializeCoreDataStackForDaemon;
- (void)setContainerDescriptionClient;
- (void)setContainerDescriptionDaemon:(id)a0;
- (id)storePrecheck;

@end
