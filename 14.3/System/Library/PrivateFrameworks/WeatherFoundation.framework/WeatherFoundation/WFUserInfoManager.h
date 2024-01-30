@class NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue, WFUserInfoManagerDelegate;

@interface WFUserInfoManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ubiquitousKVSCommunicationsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *encryptedStore;
@property (retain, nonatomic) id<WFUserInfoManagerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)readUserIdentifierAndNotify;
- (void)synchronize;
- (void)encryptedStoreChanged:(id)a0;

@end
