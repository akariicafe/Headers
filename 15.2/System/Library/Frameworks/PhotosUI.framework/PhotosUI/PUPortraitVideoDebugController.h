@class NSArray, PICompositionController, NSString;

@interface PUPortraitVideoDebugController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSArray *debugModes;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
