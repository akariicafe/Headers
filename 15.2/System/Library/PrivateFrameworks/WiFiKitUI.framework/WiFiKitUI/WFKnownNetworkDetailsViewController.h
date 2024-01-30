@class NSString, NSDictionary, NSArray, NSDate, NSDateFormatter;
@protocol WFKnownNetworksViewControllerDelegate;

@interface WFKnownNetworkDetailsViewController : UITableViewController

@property (nonatomic) BOOL isHidden;
@property (retain, nonatomic) NSString *securityType;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateLastJoined;
@property (retain, nonatomic) NSDictionary *scoreDict;
@property (retain, nonatomic) NSArray *geoTagsArray;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) NSString *ssid;
@property (weak, nonatomic) id<WFKnownNetworksViewControllerDelegate> knownNetworksDelegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
