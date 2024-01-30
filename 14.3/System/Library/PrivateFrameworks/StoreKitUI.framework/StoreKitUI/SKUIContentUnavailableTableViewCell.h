@class NSString, _UIContentUnavailableView;

@interface SKUIContentUnavailableTableViewCell : SKUITableViewCell {
    _UIContentUnavailableView *_view;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
