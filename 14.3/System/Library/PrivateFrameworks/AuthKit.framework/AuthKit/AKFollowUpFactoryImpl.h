@class NSString;

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory>

@property (copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *representingBundlePath;
@property (copy, nonatomic) NSString *bundleIconName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_clearAction;
- (void).cxx_destruct;
- (id)_itemFromPayload:(id)a0 withAltDSID:(id)a1;
- (id)_actionsFromPayload:(id)a0;
- (id)_notificationFromPayload:(id)a0;
- (id)_actionFromInfo:(id)a0;
- (id)actionWithTitle:(id)a0 andActionKey:(id)a1;
- (id)itemsForAltDSID:(id)a0 fromIDMSPayload:(id)a1;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:(id)a0;
- (BOOL)IsFollowUpItemNotificationForced:(id)a0;

@end
