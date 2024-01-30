@class UIImageView, UIActivityIndicatorView, UILabel, UIButton;

@interface EKUILocationEditItemCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}

@property (readonly, nonatomic) UIButton *clearButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithName:(id)a0 sourceSupportsAvailability:(BOOL)a1 availabilityRequestInProgress:(BOOL)a2 availabilityType:(long long)a3;

@end
