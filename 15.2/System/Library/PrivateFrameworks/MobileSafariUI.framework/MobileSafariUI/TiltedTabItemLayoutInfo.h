@class TiltedTabView, TiltedTabThumbnailView, TiltedTabItem, UIView;

@interface TiltedTabItemLayoutInfo : NSObject {
    struct CGPoint { double x; double y; } _borrowedContentBoundsOrigin;
    BOOL _reordering;
    BOOL _closing;
    BOOL _finishedClosing;
    double _borrowedContentScale;
    UIView *_borrowedContentView;
    double _contentOpacity;
    TiltedTabThumbnailView *_contentView;
    double _topBackdropHeight;
    double _bottomInset;
    double _initialCornerRadius;
    double _contentOffsetDeltaY;
    double _zPosition;
    TiltedTabView *_tiltedTabView;
    TiltedTabItem *_item;
    long long _transition;
    unsigned long long _indexForLayout;
    unsigned long long _countForLayout;
    double _verticalScrollAdjustment;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _closeButtonHitRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _contentTransform;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
