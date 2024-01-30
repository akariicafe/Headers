@class NSString, NSURL, HKHealthRecordsStore;

@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject <SFSafariViewControllerDelegate>

@property (class, readonly, nonatomic) WDClinicalSourcesDataProviderSafariDelegate *sharedSafariDelegate;

@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) NSURL *loginURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)safariViewController:(id)a0 excludedActivityTypesForURL:(id)a1 title:(id)a2;
- (id)_init;
- (void)safariViewControllerDidFinish:(id)a0;

@end
