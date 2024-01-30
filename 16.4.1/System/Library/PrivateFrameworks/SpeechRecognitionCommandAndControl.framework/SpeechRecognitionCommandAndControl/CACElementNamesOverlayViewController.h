@class NSArray;

@interface CACElementNamesOverlayViewController : UIViewController <CACViewController>

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (BOOL)_canShowWhileLocked;
- (void)loadView;

@end
