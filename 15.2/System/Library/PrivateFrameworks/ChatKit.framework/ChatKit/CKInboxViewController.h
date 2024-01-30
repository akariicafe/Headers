@class UITextView, NSString, UICollectionView, UICollectionViewDiffableDataSource, NSMutableArray, UIViewController;
@protocol CKConversationListControllerProtocol;

@interface CKInboxViewController : UIViewController <UITextViewDelegate, UICollectionViewDelegate> {
    BOOL _isVisible;
}

@property (retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *tableCellDataArray;
@property (retain, nonatomic) NSMutableArray *categoriesCellDataArray;
@property (retain, nonatomic) NSMutableArray *junkCellDataArray;
@property (retain, nonatomic) NSMutableArray *footerCellDataArray;
@property (retain, nonatomic) UITextView *stickyFooterTextView;
@property (retain, nonatomic) UITextView *scrollingFooterTextView;
@property (nonatomic) long long primaryIndexSection;
@property (nonatomic) long long categoriesIndexSection;
@property (nonatomic) long long junkIndexSection;
@property (nonatomic) long long footerIndexSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)footerTextView;
- (void)_spamFilteringStateChanged;
- (void)reloadCollectionViewDataWithConversationListUpdate:(BOOL)a0;
- (void)_highlightCurrentfilterMode;
- (BOOL)shouldHideInboxFooterTextView;
- (BOOL)_spamFilteringEnabled;
- (id)_setHeaderAttributedString;
- (id)_unreadCountStringForIndexPath:(id)a0;
- (unsigned long long)_filterModeForIndexPath:(id)a0;
- (id)_indexPathForFilterMode:(unsigned long long)a0;
- (void)updateBackButton;
- (void)reloadCollectionViewData;
- (id)_getHeaderStringForExtension:(id)a0;
- (id)initWithConversationListController:(id)a0;
- (id)_conversationList;
- (void)_contentSizeCategoryChanged;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)_chatUnreadCountDidChange:(id)a0;
- (id)_getSpamExtensionName;

@end
