@class WebBookmarkCollection;
@protocol TabGroupProvider;

@interface SFFolderPickerList : NSObject {
    unsigned long long _style;
    WebBookmarkCollection *_bookmarkCollection;
}

@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;

- (void).cxx_destruct;
- (void)_appendChildrenOfFolder:(id)a0 toArray:(id)a1 depth:(unsigned long long)a2 ignoringIdentifiers:(id)a3;
- (void)_appendFolderAndChildren:(id)a0 toArray:(id)a1 depth:(unsigned long long)a2 ignoringIdentifiers:(id)a3;
- (void)_appendPerTabGroupFavoritesIntoArray:(id)a0;
- (id)folderListItemsIgnoringIdentifiers:(id)a0;
- (id)initWithBookmarkCollection:(id)a0 style:(unsigned long long)a1;

@end
