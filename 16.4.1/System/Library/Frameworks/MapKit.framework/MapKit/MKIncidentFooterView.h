@class UIColor, MKViewWithHairline;

@interface MKIncidentFooterView : UITableViewHeaderFooterView {
    MKViewWithHairline *_hairlineView;
}

@property (copy, nonatomic) UIColor *separatorColor;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
