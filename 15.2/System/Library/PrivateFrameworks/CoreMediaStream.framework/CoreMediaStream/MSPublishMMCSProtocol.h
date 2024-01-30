@class NSString, NSMutableDictionary;
@protocol MSPublishStorageProtocolDelegate;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
    unsigned int *_itemFlags;
    long long _itemsInFlight;
}

@property (nonatomic) id<MSPublishStorageProtocolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPersonID:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)computeHashForAsset:(id)a0;
- (int)_getFileDescriptorFromItem:(unsigned long long)a0;
- (id)_getUTIFromItem:(unsigned long long)a0;
- (void)_putItemDone:(unsigned long long)a0 putReceipt:(id)a1 error:(id)a2;
- (void)_requestCompleted;
- (void)publishAssets:(id)a0 URL:(id)a1;
- (void)_putItemsFailure;

@end
