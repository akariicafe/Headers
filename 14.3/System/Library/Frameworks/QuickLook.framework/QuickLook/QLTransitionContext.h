@class QLPreviewController, UIImage, UIView;

@interface QLTransitionContext : NSObject <NSSecureCoding> {
    QLPreviewController *_previewController;
    UIImage *_sourceViewSnapshotImage;
    BOOL _contextPreparedToSend;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *sourceViewSnapshot;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } uncroppedFrame;
@property double topNavigationOffset;
@property double hostNavigationOffset;
@property BOOL usingViewForZoomTransition;
@property struct CGSize { double width; double height; } previewItemSize;

+ (BOOL)useZoomTransitionForPreviewController:(id)a0;
+ (id)firstChildNavigationControllerFromViewController:(id)a0;
+ (BOOL)useViewTransitionForPreviewController:(id)a0;
+ (BOOL)useImageTransitionForPreviewController:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithQLPreviewController:(id)a0 containerView:(id)a1 toViewController:(id)a2;
- (void)prepareContextToSend;
- (void)_snapshotSourceViewIfNeeded;
- (id)sourceViewSnapshotImage;
- (void)setUpTransitionSourceView;
- (void)encodeWithCoder:(id)a0;

@end
