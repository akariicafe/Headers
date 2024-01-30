@class UIColor, MKViewWithHairline;

@interface MKIncidentFooterView : UITableViewHeaderFooterView {
    MKViewWithHairline *_hairlineView;
}

@property (copy, nonatomic) UIColor *separatorColor;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
