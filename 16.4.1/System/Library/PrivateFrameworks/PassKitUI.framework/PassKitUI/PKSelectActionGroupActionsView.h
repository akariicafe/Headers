@class PKPaymentPass, NSString, NSArray, PKPaymentPassActionGroup, PKSelectActionGroupActionsHeader, UITableView, PKPaymentPassAction;
@protocol PKSelectActionGroupActionsViewDelegate;

@interface PKSelectActionGroupActionsView : UIView <UITableViewDelegate, UITableViewDataSource> {
    PKPaymentPass *_pass;
    PKPaymentPassActionGroup *_actionGroup;
    NSArray *_actions;
    PKSelectActionGroupActionsHeader *_actionGroupActionsHeader;
    UITableView *_tableView;
}

@property (retain, nonatomic) PKPaymentPassAction *selectedAction;
@property (weak, nonatomic) id<PKSelectActionGroupActionsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)layoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_addSubviews;
- (id)initWithPass:(id)a0 actionGroup:(id)a1;

@end
