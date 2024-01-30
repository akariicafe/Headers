@class UIView, NSMutableArray, UIToolbar;
@protocol SKUISlideshowGalleryBarViewDelegate;

@interface SKUISlideshowGalleryBarView : UIView {
    UIToolbar *_toolbarView;
    UIView *_imageViewsContainer;
    NSMutableArray *_imageViews;
}

@property (weak, nonatomic) id<SKUISlideshowGalleryBarViewDelegate> delegate;
@property (nonatomic) unsigned long long numberOfImages;
@property (nonatomic) unsigned long long selectedImageIndex;

- (id)_newImageView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)imageAtIndex:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_handleTouch:(id)a0 withEvent:(id)a1;
- (void)setImage:(id)a0 atIndex:(long long)a1;

@end
