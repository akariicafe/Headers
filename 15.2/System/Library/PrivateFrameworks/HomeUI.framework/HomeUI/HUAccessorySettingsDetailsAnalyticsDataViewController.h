@class NSString;

@interface HUAccessorySettingsDetailsAnalyticsDataViewController : UIViewController <HUAccessorySettingsDetailsViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithAccessoryGroupItem:(id)a0;

@end
