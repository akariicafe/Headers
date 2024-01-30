@class NSString, PKPaymentSetupFieldPicker;
@protocol PKApplyCollectionViewSectionControllerDelegate;

@interface PKApplyFocusedPickerViewController : PKDynamicCollectionViewController <PKApplyCollectionViewSectionControllerDelegate> {
    PKPaymentSetupFieldPicker *_picker;
}

@property (nonatomic) id<PKApplyCollectionViewSectionControllerDelegate> dynamicCollectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPicker:(id)a0;
- (id)_recomputeSections;
- (void)recomputeSectionsWithReload:(BOOL)a0;
- (void)reloadDataAnimated:(BOOL)a0;

@end
