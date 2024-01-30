@class UIView, NSString, MKMapView, UINavigationBar, UIImage, UIButton, UIToolbar, _MKUserTrackingButtonController, _MKUserTrackingButton;
@protocol MKUserTrackingView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {
    BOOL _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    _MKUserTrackingButton *_userTrackingButton;
    BOOL _explicitlyEnabled;
    BOOL _internallyEnabled;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    MKMapView *_mapView;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (retain, nonatomic) UIToolbar *_toolbar;
@property (retain, nonatomic) UINavigationBar *_navigationBar;
@property (retain, nonatomic) UIView *_associatedView;
@property (retain, nonatomic, setter=_setUserTrackingView:) id<MKUserTrackingView> _userTrackingView;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) BOOL selectsWhenTracking;
@property (retain, nonatomic) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_activityIndicatorClass;

- (void)_goToNextMode:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (void)dealloc;
- (id)_imageForState:(long long)a0 controlState:(unsigned long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (id)createViewForNavigationItem:(id)a0;
- (id)createViewForToolbar:(id)a0;
- (id)_trackingFollowWithHeadingImage;
- (id)_imageForUserTrackingMode:(long long)a0;
- (BOOL)_isHighlightedForState:(long long)a0;
- (BOOL)_isInMiniBar;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)a0;
- (void)_repositionViews;
- (void)_setImage:(id)a0 forUserTrackingMode:(long long)a1;
- (void)_setInternallyEnabled:(BOOL)a0;
- (void)_setLandscapeImagePhone:(id)a0 forUserTrackingMode:(long long)a1;
- (id)_trackingEmptyImage;
- (id)_trackingFollowImage;
- (id)_trackingNoneImage;
- (void)_updateForState:(long long)a0;
- (id)initWithMapView:(id)a0;

@end
