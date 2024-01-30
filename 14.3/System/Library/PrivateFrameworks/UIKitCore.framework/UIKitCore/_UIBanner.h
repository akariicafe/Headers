@class _UIBannerManager, _UIBannerContent, NSString, _UIBannerView, NSMutableArray, NSLayoutConstraint;

@interface _UIBanner : NSObject <_UIBanner>

@property (retain, nonatomic) _UIBannerView *view;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableArray *dismissalAnimations;
@property (retain, nonatomic) NSMutableArray *dismissalCompletionHandlers;
@property (retain, nonatomic) NSMutableArray *tapHandlers;
@property (retain, nonatomic) _UIBannerContent *content;
@property (weak, nonatomic) _UIBannerManager *manager;
@property (retain, nonatomic) NSLayoutConstraint *visibleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *hiddenConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)present;
- (void).cxx_destruct;
- (void)handleLongPressGesture:(id)a0;
- (void)addTapHandler:(id /* block */)a0;
- (void)dismiss;
- (void)addDismissalAnimations:(id /* block */)a0;
- (void)addDismissalCompletionHandler:(id /* block */)a0;

@end
