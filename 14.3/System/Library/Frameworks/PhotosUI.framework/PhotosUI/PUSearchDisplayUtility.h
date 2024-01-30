@interface PUSearchDisplayUtility : NSObject

+ (unsigned long long)cornerMaskForCell:(id)a0 roundedCornerType:(long long)a1;
+ (id)applyCornerMaskToCell:(id)a0 roundedCornerType:(long long)a1;
+ (id)genericCellFromCell:(id)a0 roundedCornerType:(long long)a1;
+ (id)genericSuggestionsCellFont;
+ (id)genericSuggestionsTitleCellFont;
+ (BOOL)indexPathIsLastRowInSection:(id)a0 tableView:(id)a1;
+ (BOOL)indexPathIsFirstRowInSection:(id)a0 tableView:(id)a1;
+ (BOOL)hasLimitedScreenSize;
+ (id)feedbackTapToRadarViewControllerWithAttachmentURLs:(id)a0;

@end
