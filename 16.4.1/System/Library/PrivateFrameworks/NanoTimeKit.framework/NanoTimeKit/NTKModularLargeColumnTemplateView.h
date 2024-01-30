@interface NTKModularLargeColumnTemplateView : NTKModularTemplateView

@property (nonatomic) BOOL useNoColumnPadding;

- (void)_enumerateColumnRowsWithBlock:(id /* block */)a0;
- (void)_layoutRowsOfColumnsWithAlignment:(long long)a0;
- (id)_newBodyLabelSubview;
- (id)_newHeaderLabelSubview;
- (id)_newLabelSubviewWithFont:(id)a0;
- (void)_positionLeadingAlignedImageView:(id)a0 label:(id)a1 withBaselineOffset:(double)a2;

@end
