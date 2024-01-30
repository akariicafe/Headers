@class NSString, MPUTextDrawingContext;

@interface MPUTextDrawingView : UIView {
    double _cachedDisplayScale;
}

@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) MPUTextDrawingContext *textDrawingContext;

- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_cachedDisplayScale;

@end
