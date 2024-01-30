@class MTMaterialView;

@interface TVRMaterialView : UIView {
    MTMaterialView *_materialView;
}

@property (nonatomic) double weighting;

+ (id)backgroundMaterialViewWithWeighting:(double)a0;
+ (id)seperatorMaterialView;
+ (id)trackpadMaterialView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithMaterialView:(id)a0;
- (id)initWithDarkMaterialView;

@end
