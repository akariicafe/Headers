@class NSError, NSString, SSPurchase, SSDownload, SSPurchaseResponse, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStoreDownload : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _canceled;
    NSMutableArray *_overridePhaseIdentifiers;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    NSString *_downloadFilePath;
}

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) long long bytesDownloaded;
@property (readonly, nonatomic) long long bytesTotal;
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, nonatomic) long long downloadIdentifier;
@property (readonly, nonatomic) long long downloadSizeLimit;
@property (readonly, nonatomic) NSError *failureError;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isPurchasing) BOOL purchasing;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) unsigned long long libraryItemIdentifier;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) NSString *phaseIdentifier;
@property (readonly, nonatomic) NSError *purchaseError;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSDictionary *rentalInformation;
@property (readonly, nonatomic, getter=isRestore) BOOL restore;
@property (readonly, nonatomic) long long storeItemIdentifier;
@property (readonly, nonatomic) long long type;

+ (id)_SSPurchaseForType:(long long)a0 attributes:(id)a1;
+ (id)storeDownloadForMediaItem:(id)a0 type:(long long)a1 attributes:(id)a2;
+ (id)storeDownloadWithDownloadIdentifier:(long long)a0;

- (BOOL)_isCanceled;
- (id)description;
- (void).cxx_destruct;
- (id)assetsForType:(id)a0;
- (void)_removeOverridePhaseIdentifier:(id)a0;
- (id)_currentOverridePhaseIdentifier;
- (void)_setSSDownload:(id)a0;
- (id)_SSDownload;
- (id)_SSPurchase;
- (id)_SSPurchaseResponse;
- (void)_addOverridePhaseIdentifier:(id)a0;
- (id)_getDownloadFilePath;
- (void)_setCanceled:(BOOL)a0;
- (void)_setDownloadFilePath:(id)a0;
- (void)_setSSPurchase:(id)a0 SSPurchaseResponse:(id)a1;
- (id)_valueForDownloadProperty:(id)a0;
- (id)initWithType:(long long)a0 attributes:(id)a1;
- (void)resetCachedRentalInformation;

@end
