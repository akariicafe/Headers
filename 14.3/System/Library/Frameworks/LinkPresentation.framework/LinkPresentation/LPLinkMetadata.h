@class NSURL, LPIconMetadata, LPImage, LPAssociatedApplicationMetadata, NSObject, LPAudioMetadata, LPSpecializationMetadata, NSItemProvider, LPAudio, LPVideo, NSString, LPVideoMetadata, LPImageMetadata, NSMutableArray, NSArray;
@protocol OS_dispatch_group;

@interface LPLinkMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    unsigned long long _asynchronousLoadDeferralTokenCount;
    BOOL _wasCopiedFromIncompleteMetadata;
    NSMutableArray *_pendingAsynchronousLoadUpdateHandlers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) unsigned int version;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSURL *relatedURL;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *creatorFacebookProfile;
@property (copy, nonatomic) NSString *creatorTwitterUsername;
@property (copy, nonatomic) NSString *appleContentID;
@property (copy, nonatomic) NSString *appleSummary;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPIconMetadata *iconMetadata;
@property (retain, nonatomic) LPImage *image;
@property (copy, nonatomic) NSArray *alternateImages;
@property (retain, nonatomic) LPImageMetadata *imageMetadata;
@property (retain, nonatomic) LPVideo *video;
@property (retain, nonatomic) LPVideoMetadata *videoMetadata;
@property (retain, nonatomic) LPAudio *audio;
@property (retain, nonatomic) LPAudioMetadata *audioMetadata;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *videos;
@property (copy, nonatomic) NSArray *streamingVideos;
@property (copy, nonatomic) NSArray *audios;
@property (copy, nonatomic) LPAssociatedApplicationMetadata *associatedApplication;
@property (copy, nonatomic) LPSpecializationMetadata *specialization;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSItemProvider *iconProvider;
@property (retain, nonatomic) NSItemProvider *imageProvider;
@property (retain, nonatomic) NSItemProvider *videoProvider;
@property (retain, nonatomic) NSURL *remoteVideoURL;

+ (id)metadataWithDataRepresentation:(id)a0;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)_initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_populateMetadataForBackwardCompatibility;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_decodeAllImagesWithMaximumSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void)_copyPropertiesFrom:(id)a0 onlyUpgradeFields:(BOOL)a1;
- (void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)a0;
- (BOOL)_isLoadingAsynchronousFields;
- (BOOL)_isDeferringAsynchronousLoads;
- (BOOL)_wasCopiedFromIncompleteMetadata;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (BOOL)_loadAsynchronousFieldsWithLoadGroup:(id)a0;
- (void)_reduceSizeByDroppingResourcesIfNeeded;
- (BOOL)_hasAnyAsynchronousFields;
- (void)_loadAsynchronousFieldsWithUpdateHandler:(id /* block */)a0;
- (id /* block */)_createAsynchronousLoadDeferralToken;
- (void)_invokePendingAsynchronousLoadUpdateHandlers;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
