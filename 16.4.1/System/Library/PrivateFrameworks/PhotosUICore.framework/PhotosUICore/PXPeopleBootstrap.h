@interface PXPeopleBootstrap : NSObject

@property (class, readonly) struct CGSize { double x0; double x1; } preferredBootstrapSize;

+ (void)_addToPeopleAlbumWithChangeRequest:(id)a0;
+ (void)_favoritePersonWithChangeRequest:(id)a0;
+ (void)_mergePerson:(id)a0 context:(id)a1 toPerson:(id)a2;
+ (void)_namePerson:(id)a0 context:(id)a1 withChangeRequest:(id)a2;
+ (BOOL)_namePerson:(id)a0 toContact:(id)a1 changeRequest:(id)a2 context:(id)a3;
+ (void)_namePerson:(id)a0 toContact:(id)a1 withChangeRequest:(id)a2;
+ (void)_namePerson:(id)a0 toString:(id)a1 withChangeRequest:(id)a2;
+ (void)_unfavoritePersonWithChangeRequest:(id)a0;
+ (void)nameAndVerifyPerson:(id)a0 toContact:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (void)performBootstrapWithSourcePerson:(id)a0 context:(id)a1 synchronous:(BOOL)a2 completion:(id /* block */)a3;

@end
