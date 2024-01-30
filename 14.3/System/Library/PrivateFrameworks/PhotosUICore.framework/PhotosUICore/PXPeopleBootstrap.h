@interface PXPeopleBootstrap : NSObject

@property (class, readonly) struct CGSize { double x0; double x1; } preferredBootstrapSize;

+ (void)performBootstrapWithSourcePerson:(id)a0 context:(id)a1 synchronous:(BOOL)a2 completion:(id /* block */)a3;
+ (void)_mergePerson:(id)a0 context:(id)a1 toPerson:(id)a2;
+ (void)_addToPeopleAlbumWithChangeRequest:(id)a0;
+ (void)_favoritePersonWithChangeRequest:(id)a0;
+ (void)_unfavoritePersonWithChangeRequest:(id)a0;
+ (void)_namePerson:(id)a0 context:(id)a1 withChangeRequest:(id)a2;
+ (void)_namePerson:(id)a0 toString:(id)a1 withChangeRequest:(id)a2;
+ (void)_namePerson:(id)a0 toContact:(id)a1 withChangeRequest:(id)a2;

@end
