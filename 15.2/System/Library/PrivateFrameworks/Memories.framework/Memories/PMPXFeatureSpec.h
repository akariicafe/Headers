@class NSString;

@interface PMPXFeatureSpec : PXFeatureSpec

@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;
- (id)specForFont:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)verticalExportSpecForFont:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
