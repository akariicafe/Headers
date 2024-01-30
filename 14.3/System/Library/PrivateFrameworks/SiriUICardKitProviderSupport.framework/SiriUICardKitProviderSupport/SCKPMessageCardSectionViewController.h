@class SCKPMessageCardSectionView, NSString, SFMessageCardSection;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMessageCardSectionViewController : UIViewController <SCKPMessageCardSectionViewDelegate, CRKCardSectionViewControlling>

@property (readonly) SFMessageCardSection *cardSection;
@property (readonly) SCKPMessageCardSectionView *view;
@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (id)initWithMessageCardSection:(id)a0;
- (void)messageCardSectionViewBeganEditing:(id)a0;
- (void)messageCardSectionViewFinishedEditing:(id)a0;

@end
