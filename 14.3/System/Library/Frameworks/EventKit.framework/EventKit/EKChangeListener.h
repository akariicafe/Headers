@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (id)changedIdentifiersForNotification:(id)a0;
+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerDelegate:(id)a0;
- (void)objectsChangedNotification:(id)a0;
- (id)_orderedDelegates;

@end
