@class NSString, PRComplicationDescriptor, PRInlineComplicationGalleryView, UICollectionViewDiffableDataSource, NSArray, NSMutableDictionary;
@protocol PRInlineComplicationGalleryViewControllerDelegate;

@interface PRInlineComplicationGalleryViewController : UIViewController <CHSWidgetDescriptorProviderObserver, PRInlineComplicationGalleryViewDelegate, UICollectionViewDelegate> {
    PRInlineComplicationGalleryView *_complicationGalleryView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_suggestionItems;
    NSMutableDictionary *_widgetHostViewControllers;
}

@property (readonly, nonatomic) PRComplicationDescriptor *selectedComplication;
@property (weak, nonatomic) id<PRInlineComplicationGalleryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_alternateDateString;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_alternateCalendarGalleryItem;
- (id)_alternateCalendarIdentifier;
- (id)_buildSnapshot;
- (void)_closeButtonTapped:(id)a0;
- (void)_configureWidgetCell:(id)a0 forItem:(id)a1 atIndexPath:(id)a2;
- (void)_configureWidgetHostViewController:(id)a0 forWidgetDescriptor:(id)a1;
- (id)_dateGalleryItem;
- (id)_galleryItemForWidgetDescriptor:(id)a0 intent:(id)a1 family:(long long)a2 iconImageHidden:(BOOL)a3 suggestedComplication:(id)a4;
- (id)_inlineGalleryItemsForWidgetDescriptors:(id)a0 iconImageHidden:(BOOL)a1 isSuggestion:(BOOL)a2;
- (id)_makeSectionHeaderRegistration;
- (id)_widgetHostViewControllerForDescriptor:(id)a0 shownAlongsideIcon:(BOOL)a1;
- (id)initWithSuggestionSet:(id)a0 selectedComplication:(id)a1;
- (long long)layoutStyleForSectionIndex:(long long)a0;

@end
