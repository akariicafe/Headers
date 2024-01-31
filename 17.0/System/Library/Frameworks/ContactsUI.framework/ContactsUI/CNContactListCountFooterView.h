@class NSObject;
@protocol CNContactListCountViewDelegate;

@interface CNContactListCountFooterView : UICollectionViewListCell

@property (nonatomic) long long contactCount;
@property (nonatomic) long long duplicateCount;
@property (nonatomic) long long selectedCount;
@property (weak, nonatomic) NSObject<CNContactListCountViewDelegate> *delegate;

- (id)countStringForLocalizedStringKey:(id)a0 count:(long long)a1;
- (id)primaryText;
- (id)countViewConfiguration;
- (BOOL)shouldDisplayContactCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)secondaryText;
- (BOOL)shouldDisplaySelectedCount;
- (void).cxx_destruct;
- (BOOL)shouldDisplayDuplicateCount;
- (void)didSelectViewAllDuplicates;

@end
