@class NSURL, _BlastDoorLPVideoMetadata, _BlastDoorLPARAssetMetadata, _BlastDoorLPAudioMetadata, NSItemProvider, _BlastDoorLPARAsset, _BlastDoorLPAudio, _BlastDoorLPSpecializationMetadata, NSString, _BlastDoorLPAssociatedApplicationMetadata, _BlastDoorLPImageMetadata, _BlastDoorLPImage, NSArray, _BlastDoorLPVideo, _SWCollaborationMetadata, _BlastDoorLPIconMetadata;

@interface _BlastDoorLPLinkMetadata : NSObject <NSCopying, NSSecureCoding>

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
@property (copy, nonatomic) NSString *twitterCard;
@property (nonatomic) BOOL usesActivityPub;
@property (copy, nonatomic) NSString *appleContentID;
@property (copy, nonatomic) NSString *appleSummary;
@property (retain, nonatomic) _BlastDoorLPARAsset *arAsset;
@property (retain, nonatomic) _BlastDoorLPARAssetMetadata *arAssetMetadata;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (retain, nonatomic) _BlastDoorLPIconMetadata *iconMetadata;
@property (retain, nonatomic) _BlastDoorLPImage *image;
@property (copy, nonatomic) NSArray *alternateImages;
@property (retain, nonatomic) _BlastDoorLPImageMetadata *imageMetadata;
@property (retain, nonatomic) _BlastDoorLPVideo *video;
@property (retain, nonatomic) _BlastDoorLPVideoMetadata *videoMetadata;
@property (retain, nonatomic) _BlastDoorLPAudio *audio;
@property (retain, nonatomic) _BlastDoorLPAudioMetadata *audioMetadata;
@property (copy, nonatomic) NSArray *arAssets;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *videos;
@property (copy, nonatomic) NSArray *streamingVideos;
@property (copy, nonatomic) NSArray *audios;
@property (copy, nonatomic) _BlastDoorLPAssociatedApplicationMetadata *associatedApplication;
@property (copy, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (copy, nonatomic) _BlastDoorLPSpecializationMetadata *specialization;
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
- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)_copyPropertiesFrom:(id)a0 onlyUpgradeFields:(BOOL)a1;
- (void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)a0;

@end
