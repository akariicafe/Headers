@class NSString, NSArray, _PSContactSuggester, UICollectionViewDiffableDataSource, UICollectionViewLayout, CNAvatarImageRenderer, NSMutableArray, UICollectionView;
@protocol CNContactSuggestionsViewControllerDelegate;

@interface CNContactSuggestionsViewController : UIViewController <UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) UICollectionViewLayout *layout;
@property (retain, nonatomic) NSArray *ignoredContactIdentifiers;
@property (retain, nonatomic) NSMutableArray *fetchedContacts;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (readonly) _PSContactSuggester *contactSuggester;
@property (weak, nonatomic) id<CNContactSuggestionsViewControllerDelegate> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *overrideSuggestedContacts;
@property (readonly, nonatomic) NSArray *selectedContacts;
@property (retain, nonatomic) NSString *suggestionsHeaderTitle;
@property (nonatomic) BOOL allowsMultiSelection;
@property (retain, nonatomic) NSArray *interactionDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)useAccessibleLayout;
- (id)compositionalLayout;
- (void)buildCollectionView;
- (void)fetchContactsIfNeeded;
- (void)fetchContacts;
- (void)fetchIgnoredContactIdentifiersIfNeeded;
- (id)filterResults:(id)a0;
- (double)estimatedHeightForSuggestionCount:(long long)a0;
- (void)imageForContact:(id)a0 imageUpdateBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)prepareForReuse;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })itemSize;

@end
