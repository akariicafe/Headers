@class VUILabel, NSString, VUIVideoAdvisoryViewLayout;

@interface VUIVideoAdvisoryLegendView : UIView

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) VUILabel *legendNameLabel;
@property (retain, nonatomic) VUILabel *legendDescriptionLabel;
@property (copy, nonatomic) NSString *legendName;
@property (copy, nonatomic) NSString *legendDescription;

- (id)initWithLayout:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })legendNameSizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
