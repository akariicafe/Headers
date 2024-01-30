@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject

@property (retain, nonatomic) NSMutableArray *searchableItems;

- (void).cxx_destruct;
- (id)_stringKeyForString:(id)a0;
- (id)_escapedStringForString:(id)a0;
- (void)addSearchableItems:(id)a0;
- (void)addSearchableItem:(id)a0;
- (void)removeSearchableItem:(id)a0;
- (BOOL)writeToPlistAndStringsFilesAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (id)items;

@end
