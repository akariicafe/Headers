@class NSArray;

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) _UISheetPresentationControllerConfiguration *_fullScreenConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) BOOL _wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (nonatomic, setter=_setMode:) long long _mode;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) long long _indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) long long _indexOfLastUndimmedDetent;
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
