@class PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;

@end
