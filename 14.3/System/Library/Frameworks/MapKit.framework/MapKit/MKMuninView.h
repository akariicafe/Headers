@class NSURL, MKHapticEngine, NSDate, MKMapItem, MKMuninBumpFlash, _MKMuninLayerHostingView, UITapGestureRecognizer, UIView, VKLabelMarker, NSString, NSLayoutConstraint, GEOMuninViewState, VKMuninMarker, MKMuninGestureController, GEOStorefrontView, NSArray, VKMapView, UIImageView;
@protocol MKMapServiceTicket, MKMuninViewDelegate, MKCompassView;

@interface MKMuninView : UIView <MKMuninGestureControllerDelegate, VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding> {
    _MKMuninLayerHostingView *_hostView;
    BOOL _changingViewSize;
    BOOL _wantsCompassShown;
    UIImageView *_transitionStartImageview;
    UIImageView *_transitionEndImageview;
    UIImageView *_transitionGridImageview;
    UIView<MKCompassView> *_compassView;
    NSLayoutConstraint *_compassTopOrBottomConstraint;
    NSLayoutConstraint *_compassTrailingConstraint;
    UITapGestureRecognizer *_compassTapGestureRecognizer;
    MKMuninGestureController *_gestureController;
    MKMuninBumpFlash *_bumpFlashView;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _lastCoordinate;
    NSArray *_lastGroundViews;
    NSString *_lastJunctionName;
    id<MKMapServiceTicket> _refineTicket;
    id<MKMapServiceTicket> _revGeoTicket;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldRect;
    BOOL _hasValidViewState;
    BOOL _storefrontFullyDrawn;
    BOOL _wantsStorefrontCloseUpView;
    BOOL _moveToStorefrontViewInProgress;
    BOOL _didTriggerAdequatelyDrawnNotification;
    GEOStorefrontView *_requestedStorefrontView;
    NSDate *_startTime;
    int _triggerAction;
    MKHapticEngine *_hapticEngine;
}

@property (retain, nonatomic) VKMapView *muninView;
@property (nonatomic, getter=isCompassHidden) BOOL compassHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } compassInsets;
@property (nonatomic) BOOL hasEnteredMunin;
@property (nonatomic) BOOL navigatingEnabled;
@property (nonatomic) BOOL panningEnabled;
@property (nonatomic) BOOL pinchingEnabled;
@property (nonatomic) BOOL showsRoadLabels;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (nonatomic) double presentationYaw;
@property (weak, nonatomic) id<MKMuninViewDelegate> delegate;
@property (readonly, nonatomic) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
@property (readonly, nonatomic) NSArray *visibleRoadLabels;
@property (readonly, nonatomic) NSArray *imageResources;
@property (readonly, nonatomic) VKMuninMarker *muninMarker;
@property (readonly, nonatomic) NSArray *visiblePlaceMUIDs;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) MKMapItem *revGeoMapItem;
@property (readonly, nonatomic) NSDate *collectionDate;
@property (readonly, nonatomic) BOOL adequatelyDrawn;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapLayerWasUnableToAnimate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)dealloc;
- (BOOL)cancelPendingMove;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)tapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_maps_initCommon;
- (void)_handleCompassTap;
- (BOOL)_pointContainedInCompassView:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setCompassHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateCompassInsets;
- (void)setPresentationYaw:(double)a0 pitch:(double)a1 animated:(BOOL)a2;
- (void)recordTriggerAction:(int)a0;
- (void)_enterMuninForMapItem:(id)a0 wantsCloseUpView:(BOOL)a1;
- (void)_enterMuninForMuninMarker:(id)a0 withHeading:(double)a1;
- (void)_enterMuninForMuninViewState:(id)a0;
- (void)_resetViewState;
- (void)_updateCameraFrame;
- (void)_updateCompass;
- (void)_setInitialLocationInfo;
- (BOOL)_moveToStorefrontView:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)moveToCloseUpViewAnimated:(BOOL)a0;
- (void)moveToStandOffViewAnimated:(BOOL)a0;
- (void)_refineLabelMarker:(id)a0;
- (void)deselectLabelMarker;
- (id)labelMarkerForCustomFeatureAnnotation:(id)a0;
- (void)addCustomFeatureDataSource:(id)a0;
- (void)removeCustomFeatureDataSource:(id)a0;
- (void)_updateLocationInfoForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 allowReverseGeocodeIfNeeded:(BOOL)a1;
- (void)moveToCloseUpView;
- (id)_locationInfoWithHeading:(double)a0;
- (void)_reverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)muninGestureControllerDidStartUserInteraction:(id)a0;
- (void)muninGestureControllerDidStopUserInteraction:(id)a0;
- (void)muninGestureController:(id)a0 didTapLabelMarker:(id)a1;
- (void)muninGestureController:(id)a0 didTapAtPoint:(struct CGPoint { double x0; double x1; })a1 areaAvailable:(BOOL)a2;
- (void)muninGestureController:(id)a0 didZoomWithDirection:(long long)a1 type:(long long)a2;
- (void)muninGestureControllerDidPan:(id)a0;
- (void)_animateCanvasForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mapLayerDidChangeSceneState:(id)a0 withState:(unsigned long long)a1;
- (void)mapLayer:(id)a0 nearestJunctionDidChange:(id)a1 currentRoad:(id)a2;
- (void)setPresentationYaw:(double)a0 animated:(BOOL)a1;
- (void)enterMuninWithEntryPoint:(id)a0;
- (void)openInMapsWithCompletionHandler:(id /* block */)a0;
- (BOOL)moveToMapItem:(id)a0 wantsCloseUpView:(BOOL)a1 orMuninMarker:(id)a2 withHeading:(double)a3 completionHandler:(id /* block */)a4;
- (void)jumpToCloseUpView;
- (void)jumpToStandOffView;
- (void)moveToStandOffView;
- (void)selectLabelMarker:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLocationInfo;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
