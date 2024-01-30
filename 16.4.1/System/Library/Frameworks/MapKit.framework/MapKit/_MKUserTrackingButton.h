@class NSString, MKMapView, _MKUserTrackingButtonController, NSMutableDictionary;
@protocol MKUserTrackingView;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {
    NSMutableDictionary *_customImages;
    NSMutableDictionary *_customLandscapeImagePhones;
    NSMutableDictionary *_customImageEdgeInsets;
    BOOL _explicitlyEnabled;
    BOOL _internallyEnabled;
    BOOL _applyDefaultImageIfNeeded;
}

@property (readonly, nonatomic) _MKUserTrackingButtonController *controller;
@property (nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) BOOL selectsWhenTracking;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) id<MKUserTrackingView> userTrackingView;
@property (readonly, nonatomic) BOOL inMiniBar;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_activityIndicatorClass;
+ (id)buttonWithMapView:(id)a0;
+ (id)buttonWithMapView:(id)a0 applyDefaultImageIfNeeded:(BOOL)a1;
+ (id)buttonWithUserTrackingView:(id)a0;
+ (id)buttonWithUserTrackingView:(id)a0 withType:(long long)a1;
+ (id)buttonWithUserTrackingView:(id)a0 withType:(long long)a1 applyDefaultImageIfNeeded:(BOOL)a2;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (void)_setState:(long long)a0;
- (void)updateForMiniBarState:(BOOL)a0;
- (long long)_state;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_imageForState:(long long)a0 controlState:(unsigned long long)a1;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (id)_defaultImageForUserTrackingMode:(long long)a0 controlState:(unsigned long long)a1;
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)a0 controlState:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageEdgeInsetsForUserTrackingMode:(long long)a0;
- (id)_imageForUserTrackingMode:(long long)a0 controlState:(unsigned long long)a1;
- (BOOL)_isHighlightedForState:(long long)a0;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)a0 controlState:(unsigned long long)a1;
- (void)_repositionViews;
- (void)_setImage:(id)a0 forUserTrackingMode:(long long)a1 controlState:(unsigned long long)a2;
- (void)_setImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forUserTrackingMode:(long long)a1;
- (void)_setInternallyEnabled:(BOOL)a0;
- (void)_setLandscapeImagePhone:(id)a0 forUserTrackingMode:(long long)a1 controlState:(unsigned long long)a2;
- (void)_updateForState:(long long)a0;

@end
