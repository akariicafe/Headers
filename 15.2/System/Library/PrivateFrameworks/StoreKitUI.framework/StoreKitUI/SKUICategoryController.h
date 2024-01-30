@class NSURL, UIBarButtonItem, UIViewController, SKUISegmentedControl, SSVLoadURLOperation, SKUICategoryTableViewController, NSString, UISegmentedControl, UIPopoverController, NSOperationQueue, NSArray, SKUICategory, SKUIClientContext, SKUICategoryArtworkLoader;
@protocol SKUICategoryControllerDelegate;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUICategoryArtworkLoader *_artworkLoader;
    UIBarButtonItem *_button;
    UIViewController *_contentsController;
    SSVLoadURLOperation *_loadOperation;
    UIPopoverController *_popover;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_segmentedControlSegments;
    SKUICategoryTableViewController *_tableViewController;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUICategoryControllerDelegate> delegate;
@property (retain, nonatomic) SKUICategory *category;
@property (retain, nonatomic) NSURL *defaultURL;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) UIBarButtonItem *categoryButton;
@property (readonly, nonatomic) BOOL isLoading;
@property (nonatomic) long long segmentedControlLength;
@property (readonly, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSURL *selectedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_artworkLoader;
- (void)_setResponse:(id)a0 error:(id)a1;
- (id)initWithContentsController:(id)a0;
- (void)loadFromURL:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)categoryTableView:(id)a0 didSelectCategory:(id)a1;
- (id)metricsPageContextForCategoryTableView:(id)a0;
- (void)buttonAction:(id)a0;
- (void)segmentedControlAction:(id)a0;
- (void)_reloadSegmentedControl;
- (void)_precacheArtworkForCategory:(id)a0;
- (void)_reloadSelectedSegment;
- (id)_rootMetricsLocations;
- (id)_tableViewControllerWithCategory:(id)a0;
- (id)_metricsLocationsWithIndex:(long long)a0;
- (void)_recordClickEventWithCategory:(id)a0 index:(long long)a1;

@end
