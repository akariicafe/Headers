@class NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue, WFUserInfoManagerDelegate;

@interface WFUserInfoManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ubiquitousKVSCommunicationsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *encryptedStore;
@property (retain, nonatomic) id<WFUserInfoManagerDelegate> delegate;

- (void)encryptedStoreChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)readUserIdentifierAndNotify;
- (void)synchronize;
- (void)dealloc;

@end
