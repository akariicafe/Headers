@interface EMMessageListChangeObserverHelper : NSObject

+ (void)collection:(id)a0 notifyChangeObserversAboutChangesByItemIDs:(id)a1;
+ (void)collection:(id)a0 notifyChangeObserversAboutChangedItemIDs:(id)a1 itemIDsWithCountChanges:(id)a2;

@end
