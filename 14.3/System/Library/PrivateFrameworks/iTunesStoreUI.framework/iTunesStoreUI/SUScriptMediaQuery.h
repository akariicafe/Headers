@class NSArray, MPMediaQuery, NSString;

@interface SUScriptMediaQuery : SUScriptObject {
    NSArray *_collections;
    NSArray *_filterPredicates;
    NSArray *_items;
    BOOL _watchingLibrary;
}

@property (readonly, nonatomic) MPMediaQuery *nativeQuery;
@property (readonly) NSArray *collections;
@property (copy) id filterPredicates;
@property (copy) NSString *groupingType;
@property (readonly) NSArray *items;
@property (readonly) NSString *comparisonTypeContains;
@property (readonly) NSString *comparisonTypeEquals;
@property (readonly) NSString *groupingTypeAlbum;
@property (readonly) NSString *groupingTypeAlbumArtist;
@property (readonly) NSString *groupingTypeArtist;
@property (readonly) NSString *groupingTypeComposer;
@property (readonly) NSString *groupingTypeGenre;
@property (readonly) NSString *groupingTypePlaylist;
@property (readonly) NSString *groupingTypePodcastTitle;
@property (readonly) NSString *groupingTypeTitle;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)attributeKeys;
- (id)canFilterByProperty:(id)a0;
- (void)addFilterPredicate:(id)a0;
- (void)removeFilterPredicate:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)_libraryChangedNotification:(id)a0;
- (void)_resetCaches;
- (void)_beginWatchingLibraryIfNecessary;
- (id)makeFilterPredicateWithProperty:(id)a0 value:(id)a1 comparisonType:(id)a2;

@end
