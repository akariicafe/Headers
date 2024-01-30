@class UIView;
@protocol WKHoverPlatterDelegate;

@interface WKHoverPlatter : NSObject {
    UIView *_view;
    id<WKHoverPlatterDelegate> _delegate;
    struct FloatPoint { float m_x; float m_y; } _hoverPoint;
    BOOL _hasOutstandingPositionInformationRequest;
    BOOL _hasDeferredPositionInformationRequest;
    BOOL _isSittingDown;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } m_size; } _lastHoverBounds;
    struct RetainPtr<CAShapeLayer> { void *m_ptr; } _lastMaskLayer;
    struct RetainPtr<CALayer> { void *m_ptr; } _lastShadowLayer;
    struct RetainPtr<CALayer> { void *m_ptr; } _lastPlatterLayer;
    struct RetainPtr<CALayer> { void *m_ptr; } _lastBackgroundLayer;
    struct RetainPtr<CAPortalLayer> { void *m_ptr; } _lastSnapshotLayer;
}

@property (nonatomic) struct FloatPoint { float x0; float x1; } hoverPoint;

- (id)initWithView:(id)a0 delegate:(id)a1;
- (void)clearLayers;
- (void)dismissPlatterWithAnimation:(BOOL)a0;
- (void)requestPositionInformationForCurrentHoverPoint;
- (void)didReceivePositionInformation:(const void *)a0;
- (void)didFinishAnimationForShadow:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;

@end
