@class NSUUID, NSString, QLCacheVersionedFileIdentifier;

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *uuid;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (readonly) float maximumPixelSize;
@property (readonly) QLCacheVersionedFileIdentifier *fileIdentifier;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) BOOL shouldProvideFoldedGenericIcon;
@property (nonatomic) unsigned long long badgeType;
@property (readonly, nonatomic) BOOL provideGenericIcon;
@property (readonly, nonatomic) BOOL provideLowQualityThumbnail;
@property (readonly, nonatomic) BOOL provideFullResolutionThumbnail;
@property (readonly, nonatomic) long long requestedMostRepresentativeType;
@property (readonly) BOOL iconMode;
@property int flavor;
@property (nonatomic) double minimumDimension;
@property BOOL wantsBaseline;
@property long long generationBehavior;
@property (readonly, nonatomic) BOOL provideCachedResultsOnly;
@property (readonly, nonatomic) BOOL forceGeneration;
@property (nonatomic) unsigned long long requestedTypes;

+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(BOOL)a3;
+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(BOOL)a3 error:(id *)a4;
+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 iconMode:(BOOL)a4;
+ (id)thumbnailRequestForFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 iconMode:(BOOL)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVersionedFileIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconMode:(BOOL)a3 flavor:(int)a4 wantsBaseline:(BOOL)a5 minimumDimension:(double)a6 requestedTypes:(unsigned long long)a7;
- (id)computeContentType;

@end
