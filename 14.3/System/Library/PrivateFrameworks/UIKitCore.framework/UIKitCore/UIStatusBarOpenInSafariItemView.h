@class UISystemNavigationAction, NSString;

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void).cxx_destruct;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (void)userDidActivateButton:(id)a0;
- (id)_displayStringFromURL:(id)a0;
- (id)_nominalTitleWithDestinationText:(id)a0;
- (BOOL)layoutImageOnTrailingEdge;

@end
