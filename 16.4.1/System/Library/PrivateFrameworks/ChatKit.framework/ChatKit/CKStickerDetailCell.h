@class NSString, CKAnimatedImageView, UIDateLabel, UILabel, SKUIItemOfferButton, NSDate;
@protocol CKStickerDetailCellDelegate;

@interface CKStickerDetailCell : UITableViewCell

@property (retain, nonatomic) CKAnimatedImageView *stickerView;
@property (retain, nonatomic) UILabel *senderLabel;
@property (retain, nonatomic) UILabel *stickerPackLabel;
@property (retain, nonatomic) UIDateLabel *timestampLabel;
@property (retain, nonatomic) SKUIItemOfferButton *viewButton;
@property (retain, nonatomic) id stickerPreview;
@property (retain, nonatomic) NSString *senderText;
@property (retain, nonatomic) NSString *stickerPackText;
@property (retain, nonatomic) NSDate *timestampDate;
@property (weak, nonatomic) id<CKStickerDetailCellDelegate> delegate;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
