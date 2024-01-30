@class ABSAddressBook, NSMutableArray;

@interface ABSChangeCallbacks : NSObject {
    ABSAddressBook *_addressBook;
    NSMutableArray *_externalCallbacks;
    NSMutableArray *_externalCallBackThreads;
    NSMutableArray *_externalCallbackContexts;
    long long _initialAccessStatus;
}

- (void)contactStoreChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAddressBook:(id)a0;
- (BOOL)hasExternalCallback:(void /* function */ *)a0 onThread:(id)a1 withContext:(void *)a2;
- (void)addExternalCallback:(void /* function */ *)a0 onThread:(id)a1 withContext:(void *)a2;
- (void)removeExternalCallback:(void /* function */ *)a0 withContext:(void *)a1;

@end
