@class NSMutableDictionary, NSString, HUHomeStatusDetailsItemManager, HUStatusDetailsTitleDescriptionCell;
@protocol HUHomeStatusDetailsViewControllerDelegate;

@interface HUHomeStatusDetailsViewController : HUServiceGridViewController <HUAboutResidentDeviceViewControllerDelegate, UITextViewDelegate, HUSoftwareUpdateUIPresentationDelegate>

@property (readonly, nonatomic) HUHomeStatusDetailsItemManager *itemManager;
@property (readonly, nonatomic) HUStatusDetailsTitleDescriptionCell *sizingTitleDescriptionCell;
@property (retain, nonatomic) NSMutableDictionary *sizingCellForClassString;
@property (weak, nonatomic) id<HUHomeStatusDetailsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)doneButtonPressed:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)softwareUpdateUIManager:(id)a0 presentViewController:(id)a1;
- (id)softwareUpdateUIManager:(id)a0 dismissViewController:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initWithItemManager:(id)a0;
- (void)layoutOptionsDidChange;
- (id)layoutOptionsForSection:(long long)a0;
- (id)prepareToPerformToggleActionForItem:(id)a0 sourceItem:(id)a1;
- (void)presentationCoordinator:(id)a0 willBeginPresentationWithContext:(id)a1;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)a0;
- (id)initWithDelegate:(id)a0 statusItem:(id)a1;

@end
