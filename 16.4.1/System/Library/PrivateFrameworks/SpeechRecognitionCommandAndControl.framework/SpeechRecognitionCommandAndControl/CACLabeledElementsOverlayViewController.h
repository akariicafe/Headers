@interface CACLabeledElementsOverlayViewController : UIViewController <CACViewController>

@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)setLabeledElements:(id)a0;

@end
