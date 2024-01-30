@class NSArray, NSString;

@interface PHActivityViewController : UIActivityViewController <PXActivityDataSource>

@property (copy, nonatomic, setter=_setPHActivityItems:) NSArray *_PHActivityItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;
- (void)_updateActivityItems:(id)a0;
- (id)activityItemsForActivity:(id)a0;
- (id)activityViewControllerForActivity:(id)a0;

@end
