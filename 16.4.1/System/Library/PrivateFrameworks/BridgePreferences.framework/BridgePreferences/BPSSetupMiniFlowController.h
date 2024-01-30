@class NSString;
@protocol BPSBuddyControllerDelegate;

@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController>

@property (weak, nonatomic) id<BPSBuddyControllerDelegate> delegate;
@property (nonatomic) BOOL isDisplayingInSkippedMiniFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
