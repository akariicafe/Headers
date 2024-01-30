@class NSArray, NSString, UIView;
@protocol _UISheetPresentationControllerDelegate;

@interface _UISheetPresentationController : UISheetPresentationController

@property (nonatomic, setter=_setAdditionalMinimumTopInset:) double _additionalMinimumTopInset;
@property (nonatomic, setter=_setGrabberTopSpacing:) double _grabberTopSpacing;
@property (nonatomic, setter=_setWantsBottomAttached:) BOOL _wantsBottomAttached;
@property (nonatomic, setter=_setAllowsInteractiveDismissWhenFullScreen:) BOOL _allowsInteractiveDismissWhenFullScreen;
@property (nonatomic, setter=_setAllowsTearOff:) BOOL _allowsTearOff;
@property (retain, nonatomic, setter=_setSourceView:) UIView *_sourceView;
@property (nonatomic, setter=_setHorizontalAlignment:) long long _horizontalAlignment;
@property (nonatomic, setter=_setMarginInCompactHeight:) double _marginInCompactHeight;
@property (nonatomic, setter=_setMarginInRegularWidthRegularHeight:) double _marginInRegularWidthRegularHeight;
@property (nonatomic, setter=_setTucksIntoUnsafeAreaInCompactHeight:) BOOL _tucksIntoUnsafeAreaInCompactHeight;
@property (nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) BOOL shouldDismissWhenTappedOutside;
@property (nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) BOOL _shouldScaleDownBehindDescendantSheets;
@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) BOOL _wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWantsFloatingInRegularWidthCompactHeight:) BOOL _wantsFloatingInRegularWidthCompactHeight;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (nonatomic, setter=_setWantsGrabber:) BOOL _wantsGrabber;
@property (nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) double _cornerRadiusForPresentationAndDismissal;
@property (nonatomic, setter=_setPreferredCornerRadius:) double _preferredCornerRadius;
@property (nonatomic, setter=_setPreferredRecessedCornerRadius:) double _preferredRecessedCornerRadius;
@property (weak, nonatomic) id<_UISheetPresentationControllerDelegate> delegate;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) long long _indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) long long _indexOfLastUndimmedDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight:) long long _indexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetentWhenFloating:) long long _indexOfLastUndimmedDetentWhenFloating;
@property (copy, nonatomic, setter=_setSheetID:) NSString *_sheetID;
@property (copy, nonatomic, setter=_setHiddenAncestorSheetID:) NSString *_hiddenAncestorSheetID;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden;
@property (nonatomic, setter=_setDetentDirectionWhenFloating:) long long _detentDirectionWhenFloating;
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (readonly, nonatomic) NSArray *_detentValues;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _currentPresentedViewFrame;
@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;

- (void)_animateChanges:(id /* block */)a0;
- (void)_sendDidChangeSelectedDetentIdentifier;
- (void)_invalidateDetents;
- (void).cxx_destruct;

@end
