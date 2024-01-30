@class NSString, UIView, NSObject, TSKDocumentRoot;
@protocol TSSPreset;

@interface TSDSwatchRenderingOperation : NSOperation {
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage { } *mDeliveredImage;
}

@property (retain) UIView *view;
@property (readonly) NSObject<TSSPreset> *preset;
@property (readonly) struct CGSize { double width; double height; } imageSize;
@property (readonly) double imageScale;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } swatchFrame;
@property unsigned long long insertPopoverPageType;
@property unsigned long long insertPopoverPageNumber;
@property (copy) NSString *identifier;
@property (readonly, nonatomic) struct CGImage { } *deliveredImage;

- (void)main;
- (void)dealloc;
- (void)deliverCGImage:(struct CGImage { } *)a0;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 documentRoot:(id)a4;
- (BOOL)needsPressedStateBackground;
- (void)p_animateSwatchIn;
- (void)p_deliverResultOnMainThread:(id)a0;
- (struct CGImage { } *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage { } *)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchEdgeInsets;

@end
