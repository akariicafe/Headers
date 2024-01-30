@class NSString, UICollectionViewDiffableDataSource, NSArray, NSMutableDictionary, PRComplicationGalleryView;
@protocol PRComplicationGalleryViewControllerDelegate;

@interface PRComplicationGalleryViewController : UIViewController <CHSWidgetDescriptorProviderObserver, PRComplicationGalleryViewDelegate, PRComplicationGalleryItemViewDelegate, UICollectionViewDelegate, PRComplicationGalleryWidgetHostProviding, PRComplicationGalleryDetailViewControllerDelegate, UISheetPresentationControllerDelegate> {
    PRComplicationGalleryView *_complicationGalleryView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_suggestionSets;
    NSMutableDictionary *_widgetHostViewControllersPerReason;
}

@property (weak, nonatomic) id<PRComplicationGalleryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_buildSnapshot;
- (void)_closeButtonTapped:(id)a0;
- (void)_configureWidgetCell:(id)a0 forItem:(id)a1 atIndexPath:(id)a2;
- (void)_configureWidgetHostViewController:(id)a0 forWidgetDescriptor:(id)a1;
- (id)_descriptorsForBundleRecord:(id)a0;
- (id)_galleryItemForComplicationDescriptor:(id)a0 iconImageHidden:(BOOL)a1;
- (id)_galleryItemForWidgetDescriptor:(id)a0 family:(long long)a1 iconImageHidden:(BOOL)a2;
- (id)_galleryItemsForWidgetDescriptors:(id)a0 iconImageHidden:(BOOL)a1;
- (id)_widgetHostViewControllerForDescriptor:(id)a0;
- (id)_widgetHostViewControllerForDescriptor:(id)a0 forReason:(id)a1;
- (void)complicationGalleryDetailViewController:(id)a0 didAddComplication:(id)a1;
- (void)complicationGalleryDetailViewControllerDidCancel:(id)a0;
- (void)complicationGalleryItemView:(id)a0 didBeginDragInteraction:(id)a1;
- (void)complicationGalleryItemView:(id)a0 didEndDragInteraction:(id)a1 withOperation:(unsigned long long)a2;
- (id)initWithSuggestionSets:(id)a0;
- (void)invalidateWidgetHostViewControllersForReason:(id)a0;
- (long long)layoutStyleForSectionIndex:(long long)a0;
- (id)widgetHostViewControllerForDescriptor:(id)a0 forReason:(id)a1;
- (id)widgetHostViewControllersForReason:(id)a0;

@end
