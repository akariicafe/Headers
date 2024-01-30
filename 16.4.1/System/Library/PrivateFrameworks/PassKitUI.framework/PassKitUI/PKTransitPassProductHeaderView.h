@class NSString, UILabel;

@interface PKTransitPassProductHeaderView : UITableViewHeaderFooterView {
    UILabel *_labelView;
}

@property (retain, nonatomic) NSString *headerLabelText;

- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
