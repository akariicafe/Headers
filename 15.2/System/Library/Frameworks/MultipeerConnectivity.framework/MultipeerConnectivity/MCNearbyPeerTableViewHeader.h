@class UILabel, UIActivityIndicatorView;

@interface MCNearbyPeerTableViewHeader : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
}

- (void)layoutSubviews;
- (id)initWithTitle:(id)a0;
- (void)dealloc;

@end
