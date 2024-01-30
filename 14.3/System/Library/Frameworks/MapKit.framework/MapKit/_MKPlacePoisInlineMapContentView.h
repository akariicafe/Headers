@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
}

@property (nonatomic) BOOL visible;

- (BOOL)hasTitle;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)mapViewHeight;
- (BOOL)useImageView;
- (void)setLocationsNumber:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
