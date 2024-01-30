@class UIButton, UILabel;
@protocol EMCollectionItemID, MFBannerViewDelegate;

@interface MFBannerView : MFMessageHeaderViewBlock

@property (retain, nonatomic) id<EMCollectionItemID> itemID;
@property (weak, nonatomic) id<MFBannerViewDelegate> delegate;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) UIButton *editButton;
@property (readonly, nonatomic) UILabel *bannerLabel;
@property (readonly, nonatomic) UILabel *dateLabel;

- (void).cxx_destruct;
- (void)displayMessageUsingViewModel:(id)a0;
- (id)initWithType:(long long)a0 itemID:(id)a1 delegate:(id)a2;

@end
