@class MTMaterialView;

@interface _TVRMaterialView : UIView {
    MTMaterialView *_materialView;
}

@property (nonatomic) double weighting;

+ (id)seperatorMaterialView;
+ (id)backgroundMaterialViewWithWeighting:(double)a0;
+ (id)trackpadMaterialView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithMaterialView:(id)a0;
- (id)initWithDarkMaterialView;

@end
