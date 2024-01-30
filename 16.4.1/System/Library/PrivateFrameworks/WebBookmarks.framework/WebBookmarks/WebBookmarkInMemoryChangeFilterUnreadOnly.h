@class NSString;

@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject <WebBookmarkInMemoryChangeFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)a0 inFolder:(int)a1;
- (id)_bookmarksIDsFromBookmarks:(id)a0 fromChangeSet:(id)a1 withFilter:(id /* block */)a2;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)a0 inFolder:(int)a1;

@end
