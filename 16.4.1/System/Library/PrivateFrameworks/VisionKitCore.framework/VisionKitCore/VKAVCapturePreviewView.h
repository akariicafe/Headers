@protocol VKAVCapturePreviewViewDelegate;

@interface VKAVCapturePreviewView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    id<VKAVCapturePreviewViewDelegate> _delegate;
    long long _interfaceOrientation;
}

+ (Class)layerClass;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
