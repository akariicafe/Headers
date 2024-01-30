@class NSArray, NSString, NSHashTable, NSObject;
@protocol OS_os_log;

@interface HKSynchronousObserverSet : NSObject {
    NSHashTable *_observerTable;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObservers;

- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 loggingCategory:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)notifyObservers:(id /* block */)a0;

@end
