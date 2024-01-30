@class UILabel, UIImageView, UIActivityIndicatorView;

@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}

- (void)safeAreaInsetsDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)updateSeparatorInset;
- (void)reloadWithConferenceRoom:(id)a0;

@end
