@class UISystemNavigationAction, NSString;

@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (void).cxx_destruct;
- (double)extraRightPadding;
- (long long)labelLineBreakMode;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void)userDidActivateButton:(id)a0;

@end
