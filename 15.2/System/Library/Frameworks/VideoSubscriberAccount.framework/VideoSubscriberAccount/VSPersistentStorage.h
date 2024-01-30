@class VSAccountChannelsCenter, VSPrivacyVoucherLockbox, VSAccountStore, VSPrivacyFacade;

@interface VSPersistentStorage : NSObject

@property (readonly, nonatomic) VSAccountStore *accountStore;
@property (readonly, nonatomic) VSAccountChannelsCenter *channelsCenter;
@property (readonly, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox;
@property (readonly, nonatomic) VSPrivacyFacade *privacyFacade;

+ (id)defaultStorageDirectoryURL;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountStoreClass:(Class)a0 channelsCenterClass:(Class)a1;
- (id)initWithAccountStoreClass:(Class)a0;

@end
