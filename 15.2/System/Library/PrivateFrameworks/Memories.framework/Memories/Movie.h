@class PHAssetRepresentation, Project, MapLocation, NSURL, NSDate, PHAsset, NSDictionary, NSString, CLLocation;

@interface Movie : NSObject <PHAssetRepresentationPersistenceObserver, PHPhotoLibraryChangeObserver, NSCoding, NSCopying>

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSURL *identifierURL;
@property (nonatomic) double durationInSeconds;
@property (retain, nonatomic) PHAsset *phAsset;
@property (retain, nonatomic) PHAssetRepresentation *phAssetRepresentation;
@property (nonatomic) int availability;
@property (weak, nonatomic) Project *weakProject;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) MapLocation *mapLocation;
@property (nonatomic) BOOL titleIsLocalizable;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSString *assetFingerprint;
@property (retain, nonatomic) NSString *masterAssetFingerprint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)mediaserverdCrashed;
+ (void)replaceURL:(id)a0 withURL:(id)a1;
+ (id)objectFromPlist:(id)a0 inProject:(id)a1;

- (id)awakeAfterUsingCoder:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isOffline;
- (void)encodeWithCoder:(id)a0;
- (void)updateMetadata;
- (BOOL)isMono;
- (BOOL)isDeleted;
- (void)updateAsset;
- (void).cxx_destruct;
- (unsigned int)videoCodec;
- (int)duration;
- (id)plistRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeFromList;
- (BOOL)isOnline;
- (BOOL)isTimelapse;
- (void)dealloc;
- (float)frameRate;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)updateDuration;
- (BOOL)hasVideoTracks;
- (BOOL)hasAudioTracks;
- (struct CGSize { double x0; double x1; })naturalSizeWithTransform;
- (void)mediaserverdCrashed;
- (BOOL)isHighFrameRate;
- (void)updateLocation;
- (id)initWithAssetRepresentation:(id)a0;
- (struct CGSize { double x0; double x1; })encodedPixelSize;
- (void)updateAssetAvailability;
- (BOOL)isKenBurnsMovie;
- (void)replaceURL:(id)a0 withURL:(id)a1;
- (id)initWithIdentifierURL:(id)a0;
- (BOOL)isUnsupportedFormat;
- (id)initWithIdentifierURL:(id)a0 userInfo:(id)a1;
- (void)updateCreationDate;
- (struct CGSize { double x0; double x1; })encodedPixelSizeWithTransform;
- (void)addToList;
- (void)stealthlySetIdentifierURL:(id)a0;
- (id)resolveRelativePath:(id)a0;
- (void)syncFavorite;
- (void)updateFavorite;
- (void)persistenceStateOfAssetRepresentationDidChange:(id)a0;
- (id)decodeIdentifierURLWithCoder:(id)a0;
- (BOOL)attemptRepairWithFingerprint;

@end
