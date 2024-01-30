@class CNContactListStyleApplier, NSString, CNContactListDuplicatesBannerView;
@protocol CNContactListDuplicatesBannerCellDelegate;

@interface CNContactListDuplicatesBannerCell : UICollectionViewListCell <CNContactListDuplicatesBannerViewDelegate>

@property (nonatomic) unsigned long long state;
@property (nonatomic) long long duplicatesCount;
@property (retain, nonatomic) CNContactListDuplicatesBannerView *duplicatesBannerView;
@property (weak, nonatomic) id<CNContactListDuplicatesBannerCellDelegate> delegate;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)duplicatesBannerViewDidTapDismiss:(id)a0;
- (void)duplicatesBannerViewDidTapViewDuplicates:(id)a0;
- (void)removeBannerView;
- (void)updateText:(id)a0;
- (void)updateWithCount:(long long)a0;
- (void)updateWithDuplicatesFoundBannerWithCount:(long long)a0;
- (void)updateWithState:(unsigned long long)a0;

@end
