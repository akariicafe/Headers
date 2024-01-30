@class HMHome, ACAccount, NSString;
@protocol HUMediaAccountDelegate;

@interface HUSplitAccountHeaderTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) ACAccount *mediaAccount;
@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HUMediaAccountDelegate> splitAccountDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_descriptionFont;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_titleFont;
- (void).cxx_destruct;
- (double)_titleHeight;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaAccount:(id)a1 home:(id)a2 delegate:(id)a3;
- (double)tableViewHeightForWidth:(double)a0;
- (id)_buttonTitleTextFont;
- (double)_descriptionHeight;
- (double)_buttonTitleTextHeight;
- (double)_maxTitleAndDescriptionCellHeightForWidth:(double)a0;

@end
