@class NSArray, PRXLabel, UILayoutGuide;

@interface PRXIconContentView : PRXCardContentView {
    NSArray *_imageViewsConstraints;
    NSArray *_bodyLabelConstraints;
    UILayoutGuide *_imageViewsGuide;
}

@property (copy, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) PRXLabel *bodyLabel;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCardStyle:(long long)a0;

@end
