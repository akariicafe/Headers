@class NSString, NCNotificationContentContainerViewController;

@interface NCNotificationRequestCustomContentProvider : NSObject <NCNotificationCustomContentProviding> {
    NCNotificationContentContainerViewController *_customContentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)customContentViewControllerForNotificationRequest:(id)a0;
- (void).cxx_destruct;

@end
