@class NSArray, PKSecureElementPass, LAContext;
@protocol PKPaymentDataProvider;

@interface PKIdentityDocumentDetailsViewController : PKSectionTableViewController {
    long long _detailViewStyle;
    PKSecureElementPass *_pass;
    NSArray *_portraitElements;
    NSArray *_criticalElements;
    NSArray *_personalElements;
    NSArray *_additionalElements;
    NSArray *_idInfoElements;
    NSArray *_drivingPrivilegesElements1;
    NSArray *_drivingPrivilegesElements2;
    NSArray *_drivingPrivilegesElements3;
    id<PKPaymentDataProvider> _dataProvider;
    BOOL _inBridge;
    LAContext *_LAContext;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_elementAtIndexPath:(id)a0;
- (id)_elementsForSection:(unsigned long long)a0;
- (void)_formatDataElements:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithPass:(id)a0 dataProvider:(id)a1 detailViewStyle:(long long)a2;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
