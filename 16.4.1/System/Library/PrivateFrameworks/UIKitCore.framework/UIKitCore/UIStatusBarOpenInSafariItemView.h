@class UISystemNavigationAction, NSString;

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (void).cxx_destruct;
- (id)_displayStringFromURL:(id)a0;
- (id)_nominalTitleWithDestinationText:(id)a0;
- (BOOL)layoutImageOnTrailingEdge;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void)userDidActivateButton:(id)a0;

@end
