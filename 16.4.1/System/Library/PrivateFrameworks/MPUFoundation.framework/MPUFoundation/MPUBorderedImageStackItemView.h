@class MPUBorderDrawingCache, UIImageView, MPUBorderConfiguration;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {
    UIImageView *_borderImageView;
}

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration;
@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_borderDrawingCacheWasInvalidated:(id)a0;
- (void)_updateBorderImageView;

@end
