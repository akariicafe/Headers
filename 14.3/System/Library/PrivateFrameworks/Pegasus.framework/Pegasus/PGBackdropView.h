@class NSString, CAFilter;

@interface PGBackdropView : __PGView {
    CAFilter *_gaussianBlurFilter;
    CAFilter *_averageColorFilter;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic) double backdropScale;

+ (Class)layerClass;

- (void)_updateFilters;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
