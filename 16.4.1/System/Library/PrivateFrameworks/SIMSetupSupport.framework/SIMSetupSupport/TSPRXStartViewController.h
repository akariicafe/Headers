@class PRXAction, NSString, UIImageView, SSProximityDevice;
@protocol TSSIMSetupFlowDelegate;

@interface TSPRXStartViewController : PRXCardContentViewController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain) PRXAction *action;
@property (retain) SSProximityDevice *client;
@property (retain) UIImageView *radioImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
