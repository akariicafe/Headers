@interface MPUCellConfiguration : NSObject

+ (Class)tableViewCellClass;
+ (id)tableViewSeparatorColor;
+ (id)tableViewBackgroundColor;
+ (id)reuseIdentifier;
+ (double)tableViewCellHeight;
+ (void)handleScrollViewDidScrollForCell:(id)a0 viewController:(id)a1;
+ (void)handleScrollViewDidScrollForCell:(id)a0 inScrollView:(id)a1 viewController:(id)a2;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)a0 viewController:(id)a1;
+ (void)configureCell:(id)a0 withViewController:(id)a1 entity:(id)a2 atIndex:(unsigned long long)a3 animated:(BOOL)a4;
+ (void)configureDownloadStatusForCell:(id)a0 withViewController:(id)a1 entity:(id)a2 atIndex:(unsigned long long)a3 animated:(BOOL)a4;
+ (void)configureCellForSizing:(id)a0;
+ (void)configureCellAfterDeceleration:(id)a0 withViewController:(id)a1 entity:(id)a2 atIndex:(unsigned long long)a3 animated:(BOOL)a4;
+ (id)mediaEntityPropertiesToFetch;
+ (void)willDisplayCell:(id)a0 inTableView:(id)a1 withViewController:(id)a2 atIndex:(unsigned long long)a3;
+ (void)didEndDisplayingCell:(id)a0 withViewController:(id)a1 atIndex:(unsigned long long)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tableViewSeparatorInset;
+ (long long)tableViewSeparatorStyle;
+ (id)tableViewCellBackgroundColor;
+ (double)expandedTableViewCellHeight;
+ (BOOL)wantsScrollViewDidScroll;
+ (BOOL)wantsScrollViewDidScrollInScrollView;
+ (BOOL)wantsScrollViewDidEndDecelerating;

@end
