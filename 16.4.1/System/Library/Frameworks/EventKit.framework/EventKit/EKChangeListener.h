@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (id)changedIdentifiersForNotification:(id)a0;
+ (BOOL)isSyncStatusChangeNotification:(id)a0;
+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;

- (void)registerDelegate:(id)a0;
- (void)objectsChangedNotification:(id)a0;
- (id)init;
- (id)_orderedDelegates;
- (void).cxx_destruct;

@end
