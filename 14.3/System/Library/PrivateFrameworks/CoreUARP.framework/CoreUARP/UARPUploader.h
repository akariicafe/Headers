@class UARPController, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPUploader : NSObject {
    struct uarpControllerObj { void *pDelegate; void *pVendorExtension; int nextRemoteAccessoryID; int nextAssetID; struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; } options; struct uarpControllerCallbacksObj { void /* function */ *fRequestBuffer; void /* function */ *fReturnBuffer; void /* function */ *fRequestTransmitMsgBuffer; void /* function */ *fReturnTransmitMsgBuffer; void /* function */ *fSendMessage; void /* function */ *fAssetProcessingComplete; void /* function */ *fUpdateInformationTLV; void /* function */ *fRequestBytesFromAsset; void /* function */ *fApplyStagedAssetsStatus; void /* function */ *fVendorSpecific; } callbacks; struct uarpRemoteAccessoryObj *pAccessoryList; struct uarpControllerAssetObj *pAssetList; } _coreController;
    struct uarpControllerCallbacksObj { void /* function */ *fRequestBuffer; void /* function */ *fReturnBuffer; void /* function */ *fRequestTransmitMsgBuffer; void /* function */ *fReturnTransmitMsgBuffer; void /* function */ *fSendMessage; void /* function */ *fAssetProcessingComplete; void /* function */ *fUpdateInformationTLV; void /* function */ *fRequestBytesFromAsset; void /* function */ *fApplyStagedAssetsStatus; void /* function */ *fVendorSpecific; } _coreCallbacks;
    struct uarpControllerAppleObj { struct uarpControllerAppleCallbacksObj { void /* function */ *fPreparePersonalizationAsset; void /* function */ *fPersonalizeAsset; } callbacks; } _appleController;
    struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; } _options;
    NSObject<OS_os_log> *_xpcLog;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_watchdogTimer;
}

@property (readonly, weak) UARPController *controller;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)pauseAssetTransfersForAccessory:(id)a0;
- (BOOL)resumeAssetTransfersForAccessory:(id)a0;
- (unsigned int)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (void)queryFirmwareUpdateResultForAccessory:(id)a0;
- (id)initWithController:(id)a0 queue:(id)a1;
- (void)cancelThrottleWatchdog;
- (void)checkSendThrottleData:(id)a0;
- (unsigned int)sendData:(id)a0 uarpMsg:(id)a1;
- (void)setThrottleWatchdog:(id)a0;
- (unsigned int)recvPersonalizationRequestForAccessory:(id)a0 buffer:(struct AppleUARPPersonalizationRequired { unsigned short x0; unsigned int x1; } *)a1 length:(unsigned int)a2;
- (unsigned int)recvPersonalizationInfoResponseForAccessory:(id)a0 buffer:(struct AppleUARPPersonalizationInfoResponse { unsigned int x0; unsigned int x1; } *)a1 length:(unsigned int)a2;
- (unsigned int)recvHeySiriNumModelsForAccessory:(id)a0 buffer:(struct AppleUARPHeySiriNumModelsResponse { unsigned int x0; unsigned char x1; unsigned char x2; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x3; } *)a1 length:(unsigned int)a2;
- (unsigned int)recvHeySiriModelInfoForAccessory:(id)a0 buffer:(struct AppleUARPHeySiriModelInfoResponse { unsigned int x0; unsigned char x1; unsigned char x2; } *)a1 length:(unsigned int)a2;
- (unsigned int)recvAppleAccessoryInfoForAccessory:(id)a0 buffer:(struct UARPMsgAccessoryAppleInformationResponse { unsigned int x0; } *)a1 length:(unsigned int)a2;
- (void)expireThrottleWatchdog:(id)a0;
- (BOOL)addAccessory:(id)a0 error:(id *)a1;
- (BOOL)removeAccessory:(id)a0 error:(id *)a1;
- (BOOL)offerAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (BOOL)offerDynamicAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (unsigned int)requestBytesInRangeForAccessory:(id)a0 asset:(id)a1 bytes:(void *)a2 length:(unsigned int)a3 offset:(unsigned int)a4 bytesCopied:(unsigned int *)a5 offsetUsed:(unsigned int *)a6;
- (unsigned int)sendMsgToThrottleQueue:(id)a0 uarpMsg:(id)a1 needsResponse:(BOOL)a2;
- (void)processingComplete:(id)a0 asset:(id)a1 status:(unsigned short)a2;
- (BOOL)applyStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (BOOL)rescindStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (long long)queryProperty:(unsigned long long)a0 forAccessory:(id)a1;
- (void)updateInfo:(id)a0 type:(unsigned int)a1 length:(unsigned int)a2 value:(char *)a3;
- (void)applyStagedAssetStatus:(id)a0 status:(unsigned short)a1;
- (BOOL)cancelFirmwareStagingForAccessory:(id)a0 asset:(id)a1;
- (unsigned int)recvVendorSpecificMessage:(unsigned short)a0 forAccessory:(id)a1 oui1:(unsigned char)a2 oui2:(unsigned char)a3 oui3:(unsigned char)a4 buffer:(char *)a5 length:(unsigned int)a6;
- (unsigned int)personalizeAsset:(struct uarpControllerAssetObj { struct uarpAssetCoreObj { unsigned short x0; unsigned short x1; unsigned int x2; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x3; unsigned int x4; unsigned short x5; } x0; unsigned short x1; void *x2; void *x3; struct uarpRemoteAccessoryObj *x4; struct uarpControllerAssetObj *x5; } *)a0 forAccessory:(id)a1;

@end
