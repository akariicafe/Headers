@class NSString, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource>

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (BOOL)isPlayable;
- (unsigned int)version;
- (BOOL)isDownloadable;
- (BOOL)isLocallyAvailable;
- (id)uniformTypeIdentifier;
- (unsigned short)storeClassID;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isStreamable;
- (id)fileURLIfLocal;
- (BOOL)isOriginalVideo;
- (BOOL)isHDRDerivative;
- (id)additionalDescription;
- (BOOL)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)a0;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (BOOL)isLargeQuality;
- (BOOL)isLocallyGeneratable;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isSDRFallback;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;

@end
