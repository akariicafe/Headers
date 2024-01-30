@class PLLibraryServicesManager;

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;

- (id)newShortLivedLibraryWithName:(const char *)a0;
- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;

@end
