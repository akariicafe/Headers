@class UARPAccessory, NSArray, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPUploaderEndpoint : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_layer2WatchdogTimer;
    NSObject<OS_dispatch_source> *_txWatchdogInfoTimer;
    NSObject<OS_dispatch_source> *_transportActiveTimer;
    struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; unsigned char reofferFirmwareOnSync; unsigned short responseTimeout; unsigned short retryLimit; } _options; void *pDelegate; unsigned short selectedProtocolVersion; unsigned char isWatchdogSet; int pendingResponse; unsigned short requestRetries; int _remoteEndpointID; unsigned char dataTransferAllowed; unsigned short txMsgID; unsigned short lastRxMsgID; struct UARPStatistics { unsigned int packetsNoVersionAgreement; unsigned int packetsMissed; unsigned int packetsDuplicate; unsigned int packetsOutOfOrder; } uarpStats; struct uarpPlatformStreamingBuffer *pStreamingCtx; struct uarpPlatformRemoteEndpoint *pNext; } _uarpEndpoint;
    struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; unsigned char reofferFirmwareOnSync; unsigned short responseTimeout; unsigned short retryLimit; } _uarpOptions;
    NSMutableArray *_txAssets;
    NSMutableArray *_rxAssets;
    NSMutableArray *_infoQuery;
}

@property (readonly) UARPAccessory *accessory;
@property (readonly) struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; } x0; void *x1; unsigned short x2; unsigned char x3; int x4; unsigned short x5; int x6; unsigned char x7; unsigned short x8; unsigned short x9; struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x10; struct uarpPlatformStreamingBuffer *x11; struct uarpPlatformRemoteEndpoint *x12; } *uarpEndpoint;
@property (readonly) struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; } *uarpOptions;
@property (readonly) NSArray *txAssets;
@property (readonly) NSArray *rxAssets;
@property unsigned long long uarpVersion;
@property unsigned long long queriedProperty;
@property BOOL pendingApplyStagedAssets;
@property BOOL pendingRescindStagedAssets;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addRxAsset:(id)a0;
- (void)addTxAsset:(id)a0;
- (void)cancelActiveTransportWatchdogTimer;
- (void)cancelLayer2WatchdogTimer;
- (void)cancelTxWatchdogInfoTimer;
- (id)findMatch:(id)a0;
- (BOOL)firstQueryInfoProperty:(unsigned long long *)a0;
- (void)handleActiveTransportWatchdogTimer:(id)a0;
- (void)handleLayer2WatchdogTimer:(id)a0;
- (void)handleTxWatchdogInfoTimer:(id)a0;
- (id)initWithUARPAccessory:(id)a0;
- (void)qCancelActiveTransportWatchdogTimer;
- (void)qCancelTxWatchdogInfoTimer;
- (void)qcancelLayer2WatchdogTimer;
- (void)queueQueryInfoProperty:(unsigned long long)a0;
- (void)rmvRxAsset:(id)a0;
- (void)rmvTxAsset:(id)a0;
- (void)setActiveTransportWatchdogTimer:(id)a0 timeoutMS:(unsigned long long)a1;
- (void)setLayer2WatchdogTimer:(id)a0 timeoutMS:(unsigned long long)a1;
- (void)setTxWatchdogInfoTimer:(id)a0 timeoutMS:(unsigned long long)a1;

@end
