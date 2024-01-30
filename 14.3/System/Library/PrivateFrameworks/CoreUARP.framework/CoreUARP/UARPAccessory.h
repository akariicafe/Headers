@class NSNumber, NSUUID, NSString, UARPAccessoryID, NSMutableArray, UARPAccessoryMsgQueue;

@interface UARPAccessory : NSObject {
    UARPAccessoryID *_id;
    NSMutableArray *_internalPendingAssets;
    BOOL _reachable;
    BOOL _assetTransfersPaused;
    UARPAccessoryMsgQueue *_msgQueue;
    NSMutableArray *_hsModelsDownloaded;
    NSMutableArray *_hsModelsPreInstalled;
    unsigned long long _numHSModelsDownloaded;
    unsigned long long _numHSModelsPreInstalled;
    NSNumber *_hsVersionMajor;
    NSNumber *_hsVersionMinor;
}

@property (retain) NSUUID *uuid;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *modelName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *productGroup;
@property (copy) NSString *stagedFirmwareVersion;
@property (copy) NSString *availableFirmwareVersion;
@property BOOL userInitiatedFirmwareStaging;
@property BOOL userInitiatedFirmwareApply;
@property unsigned int firmwareUpdateBytesTransferred;
@property unsigned int firmwareUpdateBytesTotal;
@property (copy) NSString *filepathCurrentAsset;
@property BOOL enableFirmwareDownloadOnDemand;
@property BOOL downloadOnCellularAllowed;
@property BOOL autoDownloadAllowed;
@property long long transport;
@property unsigned long long capability;

- (void)setReachable:(BOOL)a0;
- (void).cxx_destruct;
- (void)setModelName:(id)a0;
- (void)setManufacturer:(id)a0;
- (void)setFirmwareVersion:(id)a0;
- (void)setProductNumber:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)getID;
- (id)initWithID:(id)a0;
- (void)setModelNumber:(id)a0;
- (void)setSerialNumber:(id)a0;
- (BOOL)reachable;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1 uuid:(id)a2;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3 productGroup:(id)a4 productNumber:(id)a5;
- (id)initWithModelNumber:(id)a0;
- (void)setProductGroup:(id)a0;
- (void)queueThrottleMessage:(id)a0 needsResponse:(BOOL)a1;
- (id)unqueueMessageIfClearToSend;
- (void)throttledMsgResponseRecvd;
- (BOOL)isThrottleQueueEmpty;
- (void)addPendingAsset:(id)a0;
- (void)removePendingAsset:(id)a0;
- (id)pendingAssets;
- (void)setAssetTransfersPaused:(BOOL)a0;
- (BOOL)assetTransfersPaused;
- (void)updateNumberOfHeySiriModelsDownloaded:(unsigned long long)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)updateNumberOfHeySiriModelsPreInstalled:(unsigned long long)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)addHSModelDownloaded:(id)a0;
- (void)addHSModelPreInstalled:(id)a0;
- (unsigned long long)numHSModelsDownloaded;
- (unsigned long long)numHSModelsPreInstalled;
- (id)hsModelsDownloaded;
- (id)hsModelsPreInstalled;

@end
