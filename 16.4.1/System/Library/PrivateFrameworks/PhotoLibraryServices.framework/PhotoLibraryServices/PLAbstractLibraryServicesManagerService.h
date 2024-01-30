@class PLLibraryServicesManager;

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;

- (id)initWithLibraryServicesManager:(id)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (void).cxx_destruct;

@end
