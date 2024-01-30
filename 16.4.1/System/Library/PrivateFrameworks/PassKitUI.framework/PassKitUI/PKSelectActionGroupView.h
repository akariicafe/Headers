@class PKPaymentPass, NSString, NSArray, PKPaymentPassActionGroup, PKSelectActionGroupHeader, UITableView;
@protocol PKSelectActionGroupViewDelegate;

@interface PKSelectActionGroupView : UIView <UITableViewDelegate, UITableViewDataSource> {
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    PKSelectActionGroupHeader *_actionGroupHeader;
    UITableView *_tableView;
}

@property (retain, nonatomic) PKPaymentPassActionGroup *selectedActionGroup;
@property (weak, nonatomic) id<PKSelectActionGroupViewDelegate> delegate;
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
- (id)initWithPass:(id)a0 actionGroups:(id)a1;

@end
