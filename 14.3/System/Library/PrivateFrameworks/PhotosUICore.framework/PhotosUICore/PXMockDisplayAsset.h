@class NSString, NSDictionary, NSDate, NSNumber;

@interface PXMockDisplayAsset : NSObject <PXDisplayAsset>

@property (readonly, nonatomic) NSDictionary *backingDictionary;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertiesForImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)propertiesForLivePhotoWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)propertiesForVideoWithSize:(struct CGSize { double x0; double x1; })a0;

@end
