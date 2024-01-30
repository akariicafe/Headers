@interface BRCFinderBookmarkItem : BRCDocumentItem

- (id)asFinderBookmark;
- (id)asShareableItem;
- (BOOL)isShareableItem;
- (id)contentsRecordID;
- (id)baseContentsRecord;
- (BOOL)isFinderBookmark;

@end
