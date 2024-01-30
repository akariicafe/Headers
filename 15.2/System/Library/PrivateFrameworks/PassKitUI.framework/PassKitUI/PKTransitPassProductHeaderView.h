@class NSString, UILabel;

@interface PKTransitPassProductHeaderView : UITableViewHeaderFooterView {
    UILabel *_labelView;
}

@property (retain, nonatomic) NSString *headerLabelText;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
