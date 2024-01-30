@interface PUSearchDisplayUtility : NSObject

+ (id)genericSuggestionsTitleCellFont;
+ (id)applyCornerMaskToCell:(id)a0 roundedCornerType:(long long)a1;
+ (unsigned long long)cornerMaskForCell:(id)a0 roundedCornerType:(long long)a1;
+ (id)feedbackTapToRadarViewControllerWithAttachmentURLs:(id)a0;
+ (id)genericCellFromCell:(id)a0 roundedCornerType:(long long)a1;
+ (id)genericSuggestionsCellFont;
+ (BOOL)hasLimitedScreenSize;
+ (BOOL)indexPathIsFirstRowInSection:(id)a0 tableView:(id)a1;
+ (BOOL)indexPathIsLastRowInSection:(id)a0 tableView:(id)a1;

@end
