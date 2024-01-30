@class NSString, WebBookmarkCollection;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {
    WebBookmarkCollection *_collection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)bookmarkWithID:(int)a0;
- (id)bookmarksMatchingString:(id)a0;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)a0;
- (id)databaseHealthInformation;
- (id)readingListWithUnreadOnly:(BOOL)a0 filteredUsingString:(id)a1;
- (id)_collection;
- (id)readingListBookmarksMatchingString:(id)a0 maxResults:(unsigned int)a1 onlyArchivedBookmarks:(BOOL)a2;
- (id)leafChildCountForFoldersInFolderWithID:(int)a0;
- (void)enumerateBookmarks:(BOOL)a0 andReadingListItems:(BOOL)a1 matchingString:(id)a2 usingBlock:(id /* block */)a3;
- (id)initReadonlySafariBookmarkCollection;

@end
