@class NSMutableArray, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPUploaderUARP : UARPUploader {
    NSObject<OS_os_log> *_log;
    struct uarpControllerObj { void *pDelegate; void *pVendorExtension; int nextRemoteAccessoryID; int nextAssetID; struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; } options; struct uarpControllerCallbacksObj { void /* function */ *fRequestBuffer; void /* function */ *fReturnBuffer; void /* function */ *fRequestTransmitMsgBuffer; void /* function */ *fReturnTransmitMsgBuffer; void /* function */ *fSendMessage; void /* function */ *fAssetProcessingComplete; void /* function */ *fUpdateInformationTLV; void /* function */ *fRequestBytesFromAsset; void /* function */ *fApplyStagedAssetsStatus; void /* function */ *fAssetAvailableAck; void /* function */ *fAssetDataTransferAck; void /* function */ *fAssetRescindAck; void /* function */ *fSyncAck; void /* function */ *fVersionDiscoveryResponse; void /* function */ *fVendorSpecific; void /* function */ *fDynamicAssetOffer; void /* function */ *fUnsolicitedDynamicAssetOffer; void /* function */ *fAssetDataResponse; void /* function */ *fAssetTransferred; void /* function */ *fAssetProcessingAck; void /* function */ *fSetTxWatchdog; void /* function */ *fCancelTxWatchdog; void /* function */ *fAssetRelease; void /* function */ *fAssetPreProcessing; } callbacks; struct uarpRemoteAccessoryObj *pAccessoryList; struct uarpControllerAssetObj *pAssetList; struct uarpControllerAssetObj *pRxAssetList; } _coreController;
    struct uarpControllerCallbacksObj { void /* function */ *fRequestBuffer; void /* function */ *fReturnBuffer; void /* function */ *fRequestTransmitMsgBuffer; void /* function */ *fReturnTransmitMsgBuffer; void /* function */ *fSendMessage; void /* function */ *fAssetProcessingComplete; void /* function */ *fUpdateInformationTLV; void /* function */ *fRequestBytesFromAsset; void /* function */ *fApplyStagedAssetsStatus; void /* function */ *fAssetAvailableAck; void /* function */ *fAssetDataTransferAck; void /* function */ *fAssetRescindAck; void /* function */ *fSyncAck; void /* function */ *fVersionDiscoveryResponse; void /* function */ *fVendorSpecific; void /* function */ *fDynamicAssetOffer; void /* function */ *fUnsolicitedDynamicAssetOffer; void /* function */ *fAssetDataResponse; void /* function */ *fAssetTransferred; void /* function */ *fAssetProcessingAck; void /* function */ *fSetTxWatchdog; void /* function */ *fCancelTxWatchdog; void /* function */ *fAssetRelease; void /* function */ *fAssetPreProcessing; } _coreCallbacks;
    struct uarpControllerAppleObj { struct uarpControllerAppleCallbacksObj { void /* function */ *fPreparePersonalizationAsset; void /* function */ *fPersonalizeAsset; } callbacks; } _appleController;
    struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; } _options;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_txWatchdogTimer;
    NSMutableSet *_accessories;
    NSMutableArray *_assets;
}

- (BOOL)setController:(id)a0;
- (long long)queryProperty:(unsigned long long)a0 forAccessory:(id)a1;
- (BOOL)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)resumeAssetTransfersForAccessory:(id)a0;
- (BOOL)pauseAssetTransfersForAccessory:(id)a0;
- (unsigned int)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1;
- (void)queryFirmwareUpdateResultForAccessory:(id)a0;
- (BOOL)addAccessory:(id)a0 error:(id *)a1;
- (BOOL)removeAccessory:(id)a0 error:(id *)a1;
- (BOOL)offerAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (BOOL)applyStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (BOOL)rescindStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (BOOL)cancelAssetStagingForAccessory:(id)a0 asset:(id)a1;
- (BOOL)supplementalAssetUpdated:(id)a0 assetName:(id)a1 error:(id *)a2;
- (BOOL)genericNotification:(id)a0 notificationName:(id)a1 error:(id *)a2;
- (BOOL)solicitDynamicAssetForAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (BOOL)offerDynamicAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (BOOL)unsolicitedDynamicAssetForAccessory:(id)a0 assetTag:(id)a1 error:(id *)a2;
- (void)processingComplete:(id)a0 asset:(id)a1 status:(unsigned short)a2;
- (void)handleTxWatchdogTimer;
- (unsigned int)recvPersonalizationRequestForAccessory:(id)a0 buffer:(struct AppleUARPPersonalizationRequired { unsigned short x0; unsigned int x1; } *)a1 length:(unsigned int)a2;
- (unsigned int)recvPersonalizationInfoResponseForAccessory:(id)a0 buffer:(struct AppleUARPPersonalizationInfoResponse { unsigned int x0; unsigned int x1; } *)a1 length:(unsigned int)a2;
- (unsigned int)recvAppleAccessoryInfoForAccessory:(id)a0 buffer:(struct UARPMsgAccessoryAppleInformationResponse { unsigned int x0; } *)a1 length:(unsigned int)a2;
- (void)solicitDynamicAsset:(id)a0 forAccessory:(id)a1;
- (unsigned int)requestBytesInRangeForAccessory:(id)a0 asset:(id)a1 bytes:(void *)a2 length:(unsigned int)a3 offset:(unsigned int)a4 bytesCopied:(unsigned int *)a5 offsetUsed:(unsigned int *)a6;
- (void)assetRelease:(id)a0;
- (void)dynamicAssetPreProcessing:(id)a0 accessory:(id)a1 flags:(unsigned short)a2;
- (void)cancelTxWatchdogTimer;
- (void)setTxWatchdogTimer;
- (void)processingAck:(id)a0 asset:(id)a1 status:(unsigned short)a2;
- (void)rescindStagedAssetsAck:(id)a0;
- (void)syncFromAccessory:(id)a0;
- (void)updateInfo:(id)a0 type:(unsigned int)a1 length:(unsigned int)a2 value:(char *)a3;
- (void)applyStagedAssetStatus:(id)a0 status:(unsigned short)a1;
- (unsigned int)recvVendorSpecificMessage:(unsigned short)a0 forAccessory:(id)a1 oui:(struct UARPOUI { unsigned char x0; unsigned char x1; unsigned char x2; } *)a2 buffer:(char *)a3 length:(unsigned int)a4;
- (unsigned int)personalizeAsset:(struct uarpControllerAssetObj { struct uarpAssetCoreObj { unsigned short x0; unsigned short x1; unsigned int x2; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x3; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x4; unsigned int x5; unsigned short x6; } x0; unsigned short x1; void *x2; void *x3; struct uarpRemoteAccessoryObj *x4; struct uarpControllerAssetObj *x5; } *)a0 forAccessory:(id)a1;
- (void)dynamicAssetOffered:(id)a0 asset:(id)a1;
- (id)unsolicitedDynamicAssetOffered:(id)a0 assetTag:(struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a1;
- (void)dynamicAssetBytesResponded:(id)a0 asset:(id)a1 data:(id)a2 offset:(unsigned long long)a3;
- (void)dynamicAssetFullyTransferred:(id)a0 asset:(id)a1;
- (void)versionDiscoveryResponse:(id)a0 protocolVersion:(unsigned short)a1;

@end
