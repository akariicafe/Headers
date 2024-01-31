@class CNContactFormatter, CNContact, CNContactMatchInfo, CNContactListStyleApplier;
@protocol CNCancelable;

@interface CNContactListCollectionViewCell : UICollectionViewListCell

@property (retain, nonatomic) id<CNCancelable> summaryCancelationToken;
@property (nonatomic) BOOL hasBeenDisplayed;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactMatchInfo *contactMatchInfo;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic) BOOL isMeCard;
@property (nonatomic) BOOL isEmergencyContact;
@property (nonatomic) BOOL allowsMultiSelection;
@property (nonatomic) BOOL allowsMultiSelectContextMenus;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyAccessories;
- (void)cancelAsyncOperations;
- (void)setContactMatchInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)setSubtitleAttributedText:(id)a0;

@end
