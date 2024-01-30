@class NSArray, NSString;

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) _UISheetPresentationControllerConfiguration *_fullScreenConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (nonatomic, setter=_setWantsEdgeAttachedInCompactHeight:) BOOL _wantsEdgeAttachedInCompactHeight;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:) BOOL _widthFollowsPreferredContentSizeWhenEdgeAttached;
@property (nonatomic, setter=_prefersGrabberVisible:) BOOL _prefersGrabberVisible;
@property (nonatomic, setter=_setMode:) long long _mode;
@property (nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) double _cornerRadiusForPresentationAndDismissal;
@property (nonatomic, setter=_setPreferredCornerRadius:) double _preferredCornerRadius;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (copy, nonatomic, setter=_setSelectedDetentIdentifier:) NSString *_selectedDetentIdentifier;
@property (copy, nonatomic, setter=_setLargestUndimmedDetentIdentifier:) NSString *_largestUndimmedDetentIdentifier;
@property (nonatomic, setter=_setDetentDirectionWhenFloating:) long long _detentDirectionWhenFloating;
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
