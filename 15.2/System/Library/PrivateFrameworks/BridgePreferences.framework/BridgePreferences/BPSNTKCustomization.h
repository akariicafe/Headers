@interface BPSNTKCustomization : NSObject

- (id)facesViewController;
- (id)galleryViewController;
- (id)userNotificationCategories;
- (BOOL)handleUserNotificationResponse:(id)a0 fromNotificationCenter:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)handlePresentationOfNotification:(id)a0 fromNotificationCenter:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
