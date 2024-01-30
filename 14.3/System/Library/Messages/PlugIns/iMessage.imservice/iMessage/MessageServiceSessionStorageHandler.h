@interface MessageServiceSessionStorageHandler : NSObject

+ (void)_IMDStoreMessage:(id)a0 inMessage:(id)a1 forceReplace:(BOOL)a2 modifyError:(BOOL)a3 modifyFlags:(BOOL)a4 calculateUnreadCount:(BOOL)a5 flagMask:(unsigned long long)a6 shouldStoreBlock:(id /* block */)a7 didStoreBlock:(id /* block */)a8 block:(id /* block */)a9;
+ (void)storeMessage:(id)a0 withContext:(id)a1;

@end
