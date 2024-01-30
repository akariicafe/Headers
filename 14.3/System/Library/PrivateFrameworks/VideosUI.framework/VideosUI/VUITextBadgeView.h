@class NSTimer, IKViewElement, VUITextBadgeLayout, UIImage, UIView, NSAttributedString, VUIRentalExpirationLabel, NSOperation;
@protocol VUITextBadgeViewDelegate;

@interface VUITextBadgeView : UIView

@property (nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (retain, nonatomic) NSOperation *pendingOperation;
@property (nonatomic) BOOL backgroundImageForMaterialRenderingHasChanged;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) double strokeSize;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) VUITextBadgeLayout *badgeLayout;
@property (retain, nonatomic) VUIRentalExpirationLabel *rentalExpirationLabel;
@property (weak, nonatomic) id<VUITextBadgeViewDelegate> delegate;
@property (retain, nonatomic) UIImage *backgroundImageForMaterialRendering;

+ (BOOL)badgeElementHasContent:(id)a0;
+ (BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentBackgroundImage:(id)a1;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)reset;
- (void)_imageLoaded;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })_textSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_cancelPendingOperation;
- (BOOL)_textBadgeBackgroundImageNeedsUpdating;
- (void)_redrawTextBadgeWithDuration:(double)a0;
- (void)_updateBackgroundImagesWithCompletedOperation:(id)a0;
- (void)setElement:(id)a0 withBadgeLayout:(id)a1;
- (void)_redrawView:(id)a0 withDuration:(double)a1;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void)setBackgroundImageForMaterialRendering:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 overlayViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize { double x0; double x1; })a0 performSynchronously:(BOOL)a1 overlayViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
