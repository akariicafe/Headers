@class NSArray, SUScriptMediaItem, MPMediaItemCollection;

@interface SUScriptMediaItemCollection : SUScriptObject {
    NSArray *_items;
    SUScriptMediaItem *_representativeItem;
    BOOL _watchingLibrary;
}

@property (readonly, nonatomic) MPMediaItemCollection *nativeCollection;
@property (readonly) long long count;
@property (readonly) NSArray *items;
@property (readonly) NSArray *mediaTypes;
@property (readonly) SUScriptMediaItem *representativeItem;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)initWithItems:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_beginWatchingLibraryIfNecessary;
- (void)_libraryChangedNotification:(id)a0;

@end
