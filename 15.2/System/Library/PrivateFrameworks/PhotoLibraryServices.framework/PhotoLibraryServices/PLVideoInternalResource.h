@class NSString, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource>

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (BOOL)isPlayable;
- (BOOL)isHDRDerivative;
- (id)uniformTypeIdentifier;
- (unsigned short)storeClassID;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;
- (BOOL)isLargeQuality;
- (BOOL)hasAssociatedMediaMetadata;
- (id)fileURLIfLocal;
- (unsigned int)version;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isSDRFallback;
- (void).cxx_destruct;
- (id)initWithBackingResource:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLocallyGeneratable;
- (BOOL)isStreamable;
- (BOOL)isOriginalVideo;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (BOOL)isDownloadable;
- (id)additionalDescription;
- (BOOL)isLocallyAvailable;

@end
