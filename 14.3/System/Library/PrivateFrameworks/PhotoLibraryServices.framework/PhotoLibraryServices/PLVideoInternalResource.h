@class NSString, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource>

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (BOOL)isDerivative;
- (void).cxx_destruct;
- (id)uniformTypeIdentifier;
- (BOOL)isLocallyGeneratable;
- (id)fileURLIfLocal;
- (BOOL)isLocallyAvailable;
- (BOOL)isDownloadable;
- (unsigned int)version;
- (BOOL)isMediumHighQuality;
- (BOOL)isOriginalVideo;
- (BOOL)isOriginalVideoComplement;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;
- (id)initWithBackingResource:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isStreamable;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (BOOL)isSDRFallback;
- (BOOL)isHDRDerivative;
- (BOOL)hasAssociatedMediaMetadata;
- (BOOL)isPlayable;

@end
