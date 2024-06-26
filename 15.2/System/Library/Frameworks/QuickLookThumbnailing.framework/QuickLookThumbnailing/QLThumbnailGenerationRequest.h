@class NSURL, NSError, UTType, NSDate, NSDictionary, QLCacheFileProviderVersionedFileIdentifier, QLThumbnailRepresentation, NSString, FPSandboxingURLWrapper, QLCacheBasicVersionedFileIdentifier, NSData, FPItem, NSUUID;

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (readonly, nonatomic) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *parentDirectorySandboxWrapper;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) FPItem *item;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *contentTypeUTI;
@property (retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier;
@property (retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) long long iconVariant;
@property (nonatomic) BOOL wantsBaseline;
@property (nonatomic) long long generationBehavior;
@property (nonatomic) int interpolationQuality;
@property (retain, nonatomic) NSError *requestIsInvalidError;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long representationTypes;
@property (retain, nonatomic) NSDictionary *externalThumbnailGeneratorData;
@property (nonatomic) unsigned long long externalThumbnailGeneratorDataHash;
@property (nonatomic) BOOL shouldUseRestrictedExtension;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper;
@property (nonatomic, getter=isDownloadingAllowed) BOOL downloadingAllowed;
@property (copy, nonatomic) NSString *saveURLContentType;
@property (nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) NSString *overriddenContentType;
@property (copy, nonatomic) UTType *contentType;
@property (nonatomic) double minimumDimension;
@property (nonatomic) BOOL iconMode;

+ (id)customExtensionCommunicationEncodedClasses;
+ (id)requestWithThumbnailRequest:(id)a0;
+ (id)_fileProviderFileIdentifierForFPItem:(id)a0;
+ (id)_basicFileIdentifierForURL:(id)a0 error:(id *)a1;

- (void)finish;
- (long long)compare:(id)a0;
- (BOOL)isUbiquitous;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 representationTypes:(unsigned long long)a3;
- (id)_stateDescription;
- (id)saveURL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fileIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)cancel;
- (BOOL)isValid;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 representationTypes:(unsigned long long)a3;
- (id)initWithData:(id)a0 contentType:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 representationTypes:(unsigned long long)a4;
- (float)maximumPixelSize;
- (BOOL)isFileBased;
- (BOOL)isDataBased;
- (BOOL)provideLowQualityThumbnail;
- (BOOL)provideFullResolutionThumbnail;
- (BOOL)provideCachedResultsOnly;
- (BOOL)forceGeneration;
- (id)copyWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)equivalentFPItemRequestWithItem:(id)a0 representationTypes:(unsigned long long)a1;
- (long long)requestedMostRepresentativeType;
- (BOOL)resultShouldBeSavedToDisk;
- (void)markDidBegin;
- (BOOL)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 representationTypes:(unsigned long long)a2;
- (void)setSaveURL:(id)a0;
- (BOOL)provideGenericIcon;
- (BOOL)prepareForSending;
- (void)noteUpdateBlockHasBeenCalledForType:(long long)a0;

@end
