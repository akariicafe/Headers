@class CNContactStore, NSObject;
@protocol OS_dispatch_queue;

@interface MKContactMigrator : NSObject {
    CNContactStore *_contactStore;
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)importVCard:(id)a0;

@end
