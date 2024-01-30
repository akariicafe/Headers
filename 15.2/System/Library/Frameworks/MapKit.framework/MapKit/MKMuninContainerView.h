@class UIColor, NSArray, UIActivityIndicatorView, MKMuninContainerBadgeView, UIView, MKMapItem;
@protocol MKMuninContainerViewDelegate, NSObject;

@interface MKMuninContainerView : UIView {
    UIColor *_dimmingViewBackgroundColorGreyOpaque;
    UIColor *_dimmingViewBackgroundColorBlackOpaque;
    UIColor *_dimmingViewBackgroundColorBlackTranslucent;
    UIColor *_dimmingViewBackgroundColorClear;
    UIColor *_dimmingViewBackgroundColorPhotosOpaque;
    NSArray *_badgeConstraints;
}

@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorGreyOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorPhotosOpaque;
@property (nonatomic) BOOL floatingDimmingStyle;
@property (nonatomic) BOOL photosDimmingStyle;
@property (nonatomic) BOOL pipDimmingStyle;
@property (retain, nonatomic) MKMuninContainerBadgeView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) id<NSObject> muninViewDidBecomeAdequatelyDrawnObserver;
@property (retain, nonatomic) id<NSObject> muninViewDidBecomeFullyDrawnObserver;
@property (weak, nonatomic) id<MKMuninContainerViewDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBadgeOnLeadingEdge) BOOL badgeOnLeadingEdge;
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic) unsigned long long dimmingState;

- (id)initWithMuninView:(id)a0;
- (void)layoutSubviews;
- (void)setMapItem:(id)a0 wantsCloseUpView:(BOOL)a1;
- (id)muninViewIfPresent;
- (id)initWithPhotosDimmingStyle:(BOOL)a0;
- (void)cancelIfPresent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateDimmingViewBackgroundColor;
- (void)_updateBadgeConstraints;
- (void)dealloc;
- (void)_updateDimmingViewActivityIndicator;
- (void)_updateDimmingStateForMuninView:(id)a0 completion:(id /* block */)a1;
- (void)_commonInitWithMuninView:(id)a0;
- (void)setDimmingState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_setDimmingViewHidden:(BOOL)a0 loading:(BOOL)a1 animated:(BOOL)a2;
- (id)initWithFloatingDimmingStyle:(BOOL)a0;
- (void)infoCardThemeChanged;

@end
