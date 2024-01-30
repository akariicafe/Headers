@class NSString, NSArray, _PSContactSuggester, NSMutableDictionary, UICollectionViewDiffableDataSource, UICollectionViewLayout, CNAvatarImageRenderer, NSMutableArray, UICollectionView;
@protocol CNContactSuggestionsViewControllerDelegate;

@interface CNContactSuggestionsViewController : UIViewController <UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) UICollectionViewLayout *layout;
@property (retain, nonatomic) NSArray *ignoredContactIdentifiers;
@property (retain, nonatomic) NSMutableArray *fetchedContacts;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSMutableDictionary *identifiersToIndexPath;
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

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)prepareForReuse;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (double)estimatedHeaderHeight;
- (void)setCellStateSelected:(BOOL)a0 forContact:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;
- (double)estimatedHeight;
- (double)verticalSpacing;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)buildCollectionView;
- (id)compositionalLayout;
- (void)fetchContacts;
- (void)fetchContactsIfNeeded;
- (void)fetchIgnoredContactIdentifiersIfNeeded;
- (id)filterResults:(id)a0;
- (double)horizontalSectionPadding;
- (void)imageForContact:(id)a0 imageUpdateBlock:(id /* block */)a1;
- (BOOL)useAccessibleLayout;

@end
