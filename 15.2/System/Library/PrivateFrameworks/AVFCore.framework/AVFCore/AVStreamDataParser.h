@class NSArray, NSString, NSData, NSError, AVAsset, AVStreamDataParserInternal;
@protocol AVStreamDataParserOutputHandling;

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient> {
    AVStreamDataParserInternal *_parser;
}

@property (class, readonly, nonatomic) NSArray *audiovisualMIMETypes;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) id<AVStreamDataParserOutputHandling> delegate;
@property (readonly) long long status;
@property (readonly) long long status2;
@property (readonly) NSError *error;
@property (readonly, nonatomic) AVAsset *asset;

+ (BOOL)canParseExtendedMIMEType:(id)a0;
+ (struct OpaqueCMBlockBuffer { } *)_createBlockBufferUsingNSData:(id)a0 withOffset:(unsigned long long)a1 withLength:(unsigned long long)a2;
+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)a0;
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a0;

- (void)setStatus:(long long)a0;
- (BOOL)_attachedToExternalContentKeySession;
- (int)_attachToContentKeySession:(id)a0 failedSinceAlreadyAttachedToAnotherSession:(BOOL *)a1;
- (id)contentKeySession;
- (void)_willDeallocOrFinalize;
- (void)setDelegate:(id)a0;
- (void)setSession:(id)a0;
- (void)expire;
- (void)_setError:(id)a0;
- (BOOL)hasProtector;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)a0;
- (void)appendStreamData:(id)a0;
- (void)providePendingMediaData;
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)a0;
- (void)appendStreamData:(id)a0 withFlags:(unsigned long long)a1;
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a0 manifold:(struct OpaqueFigManifold **)a1;
- (void)_appendStreamData:(struct OpaqueCMBlockBuffer { } *)a0 withFlags:(unsigned long long)a1;
- (void)setShouldProvideMediaData:(BOOL)a0 forTrackID:(int)a1;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 pushedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 trackID:(int)a2 flags:(unsigned int)a3;
- (BOOL)shouldProvideMediaDataForTrackID:(int)a0;
- (void)_createAssetIfNecessary;
- (int)_registerForFigManifoldCallbacksForTrackID:(int)a0;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 trackDidEnd:(int)a1;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1 orDecryptorDidChange:(void *)a2 forTrackID:(int)a3;
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold { } *)a0;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 discoveredNewTrackID:(int)a1 mediaType:(id)a2;
- (void)contentKeySession:(id)a0 didProvideContentKeyRenewalRequest:(id)a1;
- (void)processContentKeyResponseData:(id)a0 forTrackID:(int)a1;
- (void)processContentKeyResponseError:(id)a0 forTrackID:(int)a1;
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)a0;
- (id)streamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 trackID:(int)a2 options:(id)a3 error:(id *)a4;
- (id)init;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)dealloc;

@end
