@class MRUVisualStylingProvider, NSString, UICollectionViewDiffableDataSource, NSDictionary, MRUMediaSuggestionsView, MRUMediaSuggestionsController, MRUMediaSuggestion;
@protocol MRUMediaSuggestionsViewControllerDelegate;

@interface MRUMediaSuggestionsViewController : UIViewController <UICollectionViewDelegate, MRUMediaSuggestionsControllerObserver>

@property (retain, nonatomic) MRUMediaSuggestionsView *view;
@property (retain, nonatomic) MRUMediaSuggestionsView *viewIfLoaded;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *suggestions;
@property (retain, nonatomic) NSString *selectedIndentifier;
@property (readonly, nonatomic) MRUMediaSuggestionsController *suggestionsController;
@property (weak, nonatomic) id<MRUMediaSuggestionsViewControllerDelegate> delegate;
@property (retain, nonatomic) MRUMediaSuggestion *nowPlayingMediaSuggestion;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (retain, nonatomic) NSString *suggestionContext;
@property (nonatomic) BOOL supportsHorizontalLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCell:(id)a0 forIdentifier:(id)a1;
- (void)updateSuggestions;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)initWithSuggestionsController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)mediaSuggestionsController:(id)a0 didUpdateSuggestions:(id)a1;

@end
