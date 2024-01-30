@class UIColor, UIActivityIndicatorView, MKMuninContainerBadgeView, UIView, MKMapItem;
@protocol MKMuninContainerViewDelegate, NSObject;

@interface MKMuninContainerView : UIView {
    UIColor *_dimmingViewBackgroundColorBlackOpaque;
    UIColor *_dimmingViewBackgroundColorBlackTranslucent;
    UIColor *_dimmingViewBackgroundColorClear;
    UIColor *_dimmingViewBackgroundColorPhotosOpaque;
}

@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorPhotosOpaque;
@property (nonatomic) BOOL photosDimmingStyle;
@property (nonatomic) BOOL pipDimmingStyle;
@property (retain, nonatomic) MKMuninContainerBadgeView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) id<NSObject> muninViewDidBecomeAdequatelyDrawnObserver;
@property (weak, nonatomic) id<MKMuninContainerViewDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic) unsigned long long dimmingState;

- (void)cancelIfPresent;
- (void).cxx_destruct;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)didAddSubview:(id)a0;
- (void)setMapItem:(id)a0 wantsCloseUpView:(BOOL)a1;
- (id)muninViewIfPresent;
- (id)initWithPhotosDimmingStyle:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithMuninView:(id)a0;
- (void)_updateDimmingViewBackgroundColor;
- (void)_updateDimmingViewActivityIndicator;
- (void)_updateDimmingStateForMuninView:(id)a0 completion:(id /* block */)a1;
- (void)_commonInitWithMuninView:(id)a0;
- (void)setDimmingState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_setDimmingViewHidden:(BOOL)a0 loading:(BOOL)a1 animated:(BOOL)a2;

@end
