@class UITableView, NSString, UILabel, UITapGestureRecognizer;

@interface UITableViewIndexOverlayIndicatorView : UIView {
    UILabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITableView *_table;
}

@property (copy, nonatomic) NSString *currentText;

- (void).cxx_destruct;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;
- (void)layoutSubviews;
- (id)initWithTable:(id)a0;
- (void)_tapGestureChanged:(id)a0;

@end
