@interface SMMMediaLibrary : NSObject

+ (void)addTrackWithIdentifier:(long long)a0 completion:(id /* block */)a1;
+ (void)addGlobalPlaylistWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)predicateForTracksWithAdamIdentifiers:(id)a0;
+ (id)identifierForItem:(id)a0;

@end
