@class UISystemNavigationAction, NSString;

@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (long long)labelLineBreakMode;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (void)userDidActivateButton:(id)a0;

@end
