@class NSObject;
@protocol OS_dispatch_queue;

@interface AAFKeychainManager : NSObject {
    NSObject<OS_dispatch_queue> *_keychainQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_unsafe_addKeychainItem:(id)a0 shouldAttemptUpdate:(BOOL)a1 error:(id *)a2;
- (BOOL)_unsafe_deleteKeychainItemWithDescriptor:(id)a0 error:(id *)a1;
- (id)_unsafe_fetchKeychainItemWithDescriptor:(id)a0 error:(id *)a1;
- (id)_unsafe_fetchKeychainItemsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)_unsafe_updateKeychainItemWithDescriptor:(id)a0 newItem:(id)a1 error:(id *)a2;
- (void)addKeychainItem:(id)a0 error:(id *)a1;
- (void)addOrUpdateKeychainItem:(id)a0 error:(id *)a1;
- (void)deleteKeychainItemsForDescriptor:(id)a0 error:(id *)a1;
- (id)keychainItemForDescriptor:(id)a0 error:(id *)a1;
- (id)keychainItemsForDescriptor:(id)a0 error:(id *)a1;
- (void)updateKeychainItem:(id)a0 error:(id *)a1;

@end
