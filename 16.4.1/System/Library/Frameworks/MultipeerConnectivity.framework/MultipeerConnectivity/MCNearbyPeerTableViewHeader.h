@class UILabel, UIActivityIndicatorView;

@interface MCNearbyPeerTableViewHeader : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
}

- (id)initWithTitle:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;

@end
