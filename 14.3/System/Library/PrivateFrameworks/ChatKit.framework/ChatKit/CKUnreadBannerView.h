@class _UIBackdropView, UIImageView, NSString, UILabel, UIView;
@protocol CKUnreadBannerViewDelegate;

@interface CKUnreadBannerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) UIView *overlayView;
@property (weak, nonatomic) id<CKUnreadBannerViewDelegate> delegate;
@property (nonatomic) unsigned long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)bannerPressed:(id)a0;
- (void)startAnimation;

@end
