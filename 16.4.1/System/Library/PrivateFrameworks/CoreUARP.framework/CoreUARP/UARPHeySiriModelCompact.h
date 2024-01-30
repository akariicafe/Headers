@class NSString, NSURL, UARPSuperBinaryAssetPayload, NSObject, UARPSuperBinaryAsset;
@protocol OS_os_log;

@interface UARPHeySiriModelCompact : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol> {
    NSObject<OS_os_log> *_log;
    NSURL *_superBinaryMetaDataURL;
    NSURL *_modelMetaDataURL;
    NSURL *_modelDataURL;
    NSURL *_fallbackModelMetaDataURL;
    NSURL *_fallbackModelDataURL;
    UARPSuperBinaryAsset *_asset;
    UARPSuperBinaryAssetPayload *_payloadModel;
    UARPSuperBinaryAssetPayload *_payloadFallbackModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tag;

- (id)init;
- (void).cxx_destruct;
- (void)currentHeySiriModel:(id)a0 fallbackModel:(id)a1 error:(id)a2;
- (id)generateAsset:(id *)a0;
- (id)initWithAccessory:(id)a0 controller:(id)a1 url:(id)a2;
- (id)initWithAccessory:(id)a0 uarpProtocolVersion:(unsigned long long)a1 controller:(id)a2 url:(id)a3;
- (BOOL)processDynamicAsset:(id *)a0;
- (id)uarpPayloadWithHSModel:(id)a0;

@end
