@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (BOOL)isSyncStatusChangeNotification:(id)a0;
+ (id)changedIdentifiersForNotification:(id)a0;
+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;

- (void)objectsChangedNotification:(id)a0;
- (id)_orderedDelegates;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
