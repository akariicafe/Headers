@class UILabel, UIDateLabel;

@interface CKBlackholeTranscriptCell : UITableViewCell

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;
@property (retain, nonatomic) UILabel *bodyLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForMessageItem:(id)a0 showSender:(BOOL)a1;

@end
