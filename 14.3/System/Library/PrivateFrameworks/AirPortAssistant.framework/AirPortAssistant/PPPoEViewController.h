@class NSString, PPPoEConnectionUIViewController, UILabel, UIView;

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {
    id previousNavDelegate;
}

@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (retain, nonatomic) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain) PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)touchInCellAtIndexPath:(id)a0;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (id)valueForItemOfType:(id)a0 atTypeIndex:(unsigned long long)a1 inCellWithTag:(long long)a2;
- (void)setupInitialTableHeaderConfiguration;

@end
