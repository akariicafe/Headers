@class CNContactListCountFooterView, NSObject;
@protocol CNContactListCountViewDelegate, CNContactListCollectionViewDelegate;

@interface CNContactListCollectionView : UICollectionView

@property (nonatomic) long long contactCount;
@property (nonatomic) long long duplicateCount;
@property (nonatomic) long long selectedCount;
@property (weak, nonatomic) NSObject<CNContactListCountViewDelegate> *countViewDelegate;
@property (weak, nonatomic) NSObject<CNContactListCollectionViewDelegate> *contactListCollectionViewDelegate;
@property (retain, nonatomic) CNContactListCountFooterView *contactCountView;

- (id)init;
- (void)updateSelectedContactCount;
- (void)deselectItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (unsigned long long)globalIndexForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)selectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;

@end
