@class AKController, NSArray, NSSet, NSString, UITableView;
@protocol AKAttributePickerViewControllerDelegate;

@interface AKAttributePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak) AKController *controller;
@property (retain) UITableView *tableView;
@property (retain) NSArray *rowViews;
@property (weak, nonatomic) id<AKAttributePickerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSSet *selectedAnnotations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)revalidateItems;
- (id)initWithController:(id)a0 selectedAnnotations:(id)a1;
- (void)updateLayoutForSelectedAnnotations;
- (void)_lineAttributesChanged:(id)a0;
- (void)_attributeStyleChanged:(id)a0;

@end
