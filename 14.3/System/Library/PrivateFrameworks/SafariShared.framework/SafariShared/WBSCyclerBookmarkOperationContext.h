@class NSString, WBSCyclerBookmarkListRepresentation;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerBookmarkOperationContext : NSObject

@property (retain, nonatomic) id<WBSCyclerTestTarget> testTarget;
@property (retain, nonatomic) WBSCyclerBookmarkListRepresentation *topLevelBookmark;
@property (copy, nonatomic) NSString *titlePrefix;

- (void).cxx_destruct;
- (BOOL)_isBookmarkPrefixed:(id)a0;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)a0;
- (id)_copyBookmark:(id)a0 filteringWithIdentifierWhitelist:(id)a1;
- (BOOL)_isBookmarkValid:(id)a0;
- (id)randomDescendantOfList:(id)a0 enforcingTitlePrefixValidity:(BOOL)a1 passingTest:(id /* block */)a2;
- (id)randomValidStrictDescendantOfList:(id)a0;
- (id)filterOutBookmarksWithoutTitlePrefixInList:(id)a0;
- (id)randomBookmarkTitle;
- (id)randomValidStrictDescendantOfTopLevelBookmark;

@end
