@class NSArray, NSString, PKPaymentVerificationController, PKActivationMethodTableViewCell;

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource> {
    PKActivationMethodTableViewCell *_sizingCell;
}

@property (readonly, nonatomic) PKPaymentVerificationController *verificationController;
@property (retain, nonatomic) NSArray *verificationChannels;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)_detailTextLabelForChannel:(id)a0;
- (void).cxx_destruct;
- (id)initWithVerificationController:(id)a0;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (id)newVerificationRequest;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
