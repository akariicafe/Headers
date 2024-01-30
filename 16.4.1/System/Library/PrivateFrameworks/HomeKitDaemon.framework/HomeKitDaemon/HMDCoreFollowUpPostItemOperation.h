@protocol HMDFollowUpItem, HMDFollowUpController;

@interface HMDCoreFollowUpPostItemOperation : HMFOperation

@property (copy, nonatomic) id<HMDFollowUpItem> itemToPost;
@property (retain, nonatomic) id<HMDFollowUpController> followUpController;

- (void)main;
- (void).cxx_destruct;
- (id)initWithItemToPost:(id)a0 followUpController:(id)a1;

@end
