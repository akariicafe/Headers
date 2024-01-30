@class BPSRemoveMigrationWatchView, UILabel, BPSCheckMarkView;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell

@property (retain, nonatomic) BPSRemoveMigrationWatchView *watchView;
@property (retain, nonatomic) BPSCheckMarkView *checkmarkView;
@property (retain, nonatomic) UILabel *deviceDetailLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
