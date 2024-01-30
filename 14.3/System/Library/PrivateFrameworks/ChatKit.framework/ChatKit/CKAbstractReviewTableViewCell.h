@class UILabel, NSString;

@interface CKAbstractReviewTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *lastModifiedLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) NSString *mainText;
@property (retain, nonatomic) NSString *subheadingText;
@property (nonatomic) unsigned long long size;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
