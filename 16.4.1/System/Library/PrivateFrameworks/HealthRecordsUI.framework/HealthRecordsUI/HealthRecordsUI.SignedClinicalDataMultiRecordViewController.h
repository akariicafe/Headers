@interface HealthRecordsUI.SignedClinicalDataMultiRecordViewController : HKTableViewController {
    void /* unknown type, empty encoding */ medicalRecords;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ displayGroups;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithUsingInsetStyling:(BOOL)a0;

@end
