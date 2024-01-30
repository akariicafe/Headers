@class NSObject, NSArray, NSString, NSMutableSet, NSMutableDictionary, ATLegacyMessageLink, NSMutableArray;
@protocol OS_dispatch_queue, ATAssetLinkDelegate, ATLegacyAssetLinkProgressDelegate;

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {
    NSMutableSet *_unqueuedAssets;
    NSMutableDictionary *_enqueuedAssetsByDataClass;
    ATLegacyMessageLink *_messageLink;
    NSMutableDictionary *_syncIDToItemPidMap;
    NSMutableArray *_readyDataClasses;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_hostVersion;
}

@property (copy, nonatomic) NSArray *supportedDataClasses;
@property (copy, nonatomic) NSArray *readyDataClasses;
@property (weak, nonatomic) id<ATLegacyAssetLinkProgressDelegate> progressDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)prioritizeAsset:(id)a0;
- (BOOL)linkIsReady;
- (void)cancelAssets:(id)a0;
- (BOOL)canEnqueueAsset:(id)a0;
- (unsigned long long)maximumBatchSize;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)messageLinkWasClosed:(id)a0;
- (unsigned long long)priority;
- (BOOL)open;
- (void)_finishAsset:(id)a0 withError:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (id)_assetsForDataClass:(id)a0 identifier:(id)a1;
- (id)_assetManifestForDataclasses:(id)a0;
- (void)_enqueueAndRequestAssets;
- (void)_handleFileCompleteMessage:(id)a0;
- (void)_handleFileErrorMessage:(id)a0;
- (void)_handleFileProgressMessage:(id)a0;
- (id)_manifestEntryForATAsset:(id)a0;
- (id)initWithMessageLink:(id)a0 hostVersion:(id)a1;

@end
