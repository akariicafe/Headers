@interface BRCFinderBookmarkItem : BRCDocumentItem

- (BOOL)isFinderBookmark;
- (id)asShareableItem;
- (id)asFinderBookmark;
- (BOOL)isShareableItem;
- (id)contentsRecordID;
- (id)baseContentsRecord;

@end
