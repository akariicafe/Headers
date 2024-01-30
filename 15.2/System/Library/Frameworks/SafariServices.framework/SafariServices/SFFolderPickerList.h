@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject {
    unsigned long long _style;
    WebBookmarkCollection *_bookmarkCollection;
}

- (void).cxx_destruct;
- (id)initWithBookmarkCollection:(id)a0 style:(unsigned long long)a1;
- (id)folderListItemsIgnoringIdentifiers:(id)a0;
- (void)_appendFolderAndChildren:(id)a0 toArray:(id)a1 depth:(unsigned long long)a2 ignoringIdentifiers:(id)a3;
- (void)_appendChildrenOfFolder:(id)a0 toArray:(id)a1 depth:(unsigned long long)a2 ignoringIdentifiers:(id)a3;

@end
