@class NSArray, WebBookmark, NSMutableArray;

@interface WBDuplicateBookmarkGroup : NSObject {
    NSMutableArray *_dupicateBookmarks;
    NSMutableArray *_dupicateBookmarksToKeep;
}

@property (readonly, nonatomic) WebBookmark *originalBookmark;
@property (readonly, nonatomic) NSArray *duplicates;
@property (readonly, nonatomic) NSArray *duplicatesToKeep;
@property (readonly, nonatomic) BOOL foundDuplicates;

- (void).cxx_destruct;
- (void)addDuplicateBookmark:(id)a0 replaceOriginal:(BOOL)a1;
- (void)addDuplicateBookmarkToKeep:(id)a0;
- (void)exchangeOriginalBookmarkWithBookmark:(id)a0;
- (id)initWithOriginalBookmark:(id)a0;
- (void)removeAllDuplicates;

@end
