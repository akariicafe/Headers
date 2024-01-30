@interface SearchUI : NSObject

+ (id)rowViewForResult:(id)a0 style:(unsigned long long)a1 feedbackDelegate:(id)a2;
+ (id)viewForCardSection:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
+ (double)idealPlatterWidthForOrientation:(long long)a0;
+ (id)rowViewsForResults:(id)a0 style:(unsigned long long)a1 feedbackDelegate:(id)a2;
+ (id)rowViewsForResults:(id)a0 feedbackDelegate:(id)a1;
+ (id)viewsForCardSections:(id)a0 feedbackListener:(id)a1;
+ (id)reuseIdentifierForCardSection:(id)a0;
+ (id)cardViewControllerForCard:(id)a0 style:(unsigned long long)a1 feedbackDelegate:(id)a2;
+ (id)cardViewControllerForCard:(id)a0 feedbackDelegate:(id)a1;
+ (BOOL)updateCardSectionView:(id)a0 withCardSection:(id)a1;
+ (id)viewsForCardSections:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
+ (double)idealPlatterWidth;

@end
