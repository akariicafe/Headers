@class _PASLock;

@interface _CDContactFavoritesUtilities : NSObject

@property (retain, nonatomic) _PASLock *contactFavorites;

+ (id)sharedInstance;

- (id)entriesForContact:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)favoriteContactEntries;

@end
