@class UIColor, MKViewWithHairline;

@interface MKIncidentFooterView : UITableViewHeaderFooterView {
    MKViewWithHairline *_hairlineView;
}

@property (copy, nonatomic) UIColor *separatorColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithReuseIdentifier:(id)a0;

@end
