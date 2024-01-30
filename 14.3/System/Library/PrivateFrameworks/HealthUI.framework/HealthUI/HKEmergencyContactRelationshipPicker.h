@class NSArray;
@protocol HKEmergencyContactRelationshipPickerDelegate;

@interface HKEmergencyContactRelationshipPicker : HKTableViewController {
    NSArray *_tokens;
    NSArray *_labels;
}

@property (weak, nonatomic) id<HKEmergencyContactRelationshipPickerDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)_cancelTapped:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
