@class UIImageView, UIActivityIndicatorView, UILabel, UIButton;

@interface EKUILocationEditItemCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
    UIButton *_clearButton;
}

@property (copy, nonatomic) id /* block */ clearButtonTapped;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithName:(id)a0 sourceSupportsAvailability:(BOOL)a1 availabilityRequestInProgress:(BOOL)a2 availabilityType:(long long)a3 showClearButton:(BOOL)a4;
- (void)_clearButtonTapped:(id)a0;

@end
