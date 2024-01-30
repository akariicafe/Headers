@class NSObject;
@protocol CNContactListCountViewDelegate;

@interface CNContactListCountFooterView : UICollectionViewListCell

@property (nonatomic) long long contactCount;
@property (nonatomic) long long duplicateCount;
@property (nonatomic) long long selectedCount;
@property (weak, nonatomic) NSObject<CNContactListCountViewDelegate> *delegate;

- (void)didSelectViewAllDuplicates;
- (BOOL)shouldDisplaySelectedCount;
- (id)secondaryText;
- (id)primaryText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)countViewConfiguration;
- (BOOL)shouldDisplayContactCount;
- (BOOL)shouldDisplayDuplicateCount;
- (id)countStringForLocalizedStringKey:(id)a0 count:(long long)a1;
- (void).cxx_destruct;

@end
