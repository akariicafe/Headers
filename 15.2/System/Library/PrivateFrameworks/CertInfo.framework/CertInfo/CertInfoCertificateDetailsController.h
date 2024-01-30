@class NSArray, UIBarButtonItem;
@protocol CertInfoCertificateDetailsControllerDelegate;

@interface CertInfoCertificateDetailsController : UITableViewController {
    NSArray *_sectionDictionaries;
    UIBarButtonItem *_doneButton;
    unsigned char _showsDoneButton : 1;
}

@property (weak, nonatomic) id<CertInfoCertificateDetailsControllerDelegate> delegate;
@property (nonatomic) BOOL showsDoneButton;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)setShowsDoneButton:(BOOL)a0;
- (BOOL)showsDoneButton;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_doneButtonPressed:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithCertificateProperties:(id)a0;
- (id)initWithTrust:(struct __SecTrust { } *)a0 certificateIndex:(long long)a1;
- (id)_sectionsForProperties:(id)a0;
- (id)_sectionsForProperties:(id)a0 currentSectionDictionary:(id)a1;
- (id)_propertiesForIndexPath:(id)a0;

@end
