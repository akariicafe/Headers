@class NSString;
@protocol MUIBucketSenderCloudStorageDelegate, EMMutableDictionaryProtocol;

@interface MUIBucketSenderCloudStorage : NSObject <EMUbiquitouslyPersistedDictionaryDelegate_Private> {
    id<EMMutableDictionaryProtocol> _persistentDictionary;
}

@property (readonly, weak, nonatomic) id<MUIBucketSenderCloudStorageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)a0 deletedItems:(id)a1;
- (void)removeAllObjects;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_mergeChangesForRemotelyChangedKeys:(id)a0 localStore:(id)a1 cloudStore:(id)a2;
- (id)_addressToUseFromAddress:(id)a0;
- (void)_removeSenderWithEmailAddresses:(id)a0;
- (id)initWithMutableDictionary:(id)a0 delegate:(id)a1;
- (void)moveSender:(id)a0 toBucket:(long long)a1 userInitiated:(BOOL)a2;
- (void)moveSenderWithEmailAddresses:(id)a0 toBucket:(long long)a1 userInitiated:(BOOL)a2;
- (void)removeSender:(id)a0;

@end
