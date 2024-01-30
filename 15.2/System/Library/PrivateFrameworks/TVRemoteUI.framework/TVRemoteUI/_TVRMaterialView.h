@class MTMaterialView;

@interface _TVRMaterialView : UIView {
    MTMaterialView *_materialView;
}

@property (nonatomic) double weighting;

+ (id)seperatorMaterialView;
+ (id)backgroundMaterialViewWithWeighting:(double)a0;
+ (id)trackpadMaterialView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithMaterialView:(id)a0;
- (id)initWithDarkMaterialView;

@end
