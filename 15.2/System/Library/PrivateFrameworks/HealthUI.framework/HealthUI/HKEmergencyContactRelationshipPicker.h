@class NSArray;
@protocol HKEmergencyContactRelationshipPickerDelegate;

@interface HKEmergencyContactRelationshipPicker : HKTableViewController {
    NSArray *_tokens;
    NSArray *_labels;
}

@property (weak, nonatomic) id<HKEmergencyContactRelationshipPickerDelegate> delegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_cancelTapped:(id)a0;

@end
