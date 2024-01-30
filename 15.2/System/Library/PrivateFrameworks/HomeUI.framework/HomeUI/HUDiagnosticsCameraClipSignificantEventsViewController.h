@class UITableView, NSString, HMCameraClip;

@interface HUDiagnosticsCameraClipSignificantEventsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) HMCameraClip *cameraClip;
@property (retain, nonatomic) UITableView *eventTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCameraClip:(id)a0;

@end
