@interface PKProvider : NSObject

+ (void)createLibraryWithCompletion:(id /* block */)a0;
+ (void)createCatalogWithCompletion:(id /* block */)a0;
+ (void)createPlayerControllerWithCompletion:(id /* block */)a0;

- (id)init;

@end
