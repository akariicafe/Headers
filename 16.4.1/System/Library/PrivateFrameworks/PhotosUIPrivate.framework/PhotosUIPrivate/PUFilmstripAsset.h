@class AVAsset, NSString, CLLocation, NSDate;

@interface PUFilmstripAsset : NSObject <PUDisplayAsset> {
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
}

@property (nonatomic) double sourceTime;
@property (nonatomic, setter=_setAsset:) AVAsset *_asset;
@property (nonatomic, setter=_setNormalizedTime:) double _normalizedTime;
@property (nonatomic, setter=_setSourceTimeAccurate:) BOOL _isSourceTimeAccurate;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned long long originalFilesize;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } photoIrisStillDisplayTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } photoIrisVideoDuration;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) unsigned long long deferredLogInfo;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoKeyFrameSourceTime;
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property (readonly, nonatomic) BOOL isGuestAsset;
@property (readonly, nonatomic) BOOL hasSyndicationInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
