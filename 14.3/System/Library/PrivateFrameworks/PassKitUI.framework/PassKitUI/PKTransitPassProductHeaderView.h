@class NSString, UILabel;

@interface PKTransitPassProductHeaderView : UITableViewHeaderFooterView {
    UILabel *_labelView;
}

@property (retain, nonatomic) NSString *headerLabelText;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;

@end
