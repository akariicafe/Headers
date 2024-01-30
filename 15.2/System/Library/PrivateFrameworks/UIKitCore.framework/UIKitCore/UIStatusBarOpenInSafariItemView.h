@class UISystemNavigationAction, NSString;

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView

@property (retain, nonatomic) UISystemNavigationAction *systemNavigationAction;
@property (retain, nonatomic) NSString *destinationText;

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (id)shortenedTitleWithCompressionLevel:(int)a0;
- (void)userDidActivateButton:(id)a0;
- (void).cxx_destruct;
- (id)_displayStringFromURL:(id)a0;
- (BOOL)layoutImageOnTrailingEdge;
- (id)_nominalTitleWithDestinationText:(id)a0;

@end
