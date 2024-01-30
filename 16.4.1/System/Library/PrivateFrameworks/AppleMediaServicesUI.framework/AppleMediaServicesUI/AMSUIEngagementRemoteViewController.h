@class NSString;
@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;

@interface AMSUIEngagementRemoteViewController : _UIRemoteViewController <AMSUIEngagementTaskHostInterface>

@property (weak, nonatomic) id<AMSUIEngagementTaskHostInterface> delegate;
@property (readonly, nonatomic) id<AMSUIEngagementTaskRemoteInterface> remoteProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

@end
