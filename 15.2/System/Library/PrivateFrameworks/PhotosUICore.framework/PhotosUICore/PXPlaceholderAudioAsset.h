@class NSString, NSArray;
@protocol PXAudioAsset, PXDisplayAsset;

@interface PXPlaceholderAudioAsset : NSObject <PXAudioAsset>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *albumTitle;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } exportableDuration;
@property (readonly, nonatomic) Class audioSessionClass;
@property (readonly, copy, nonatomic) NSString *colorGradeCategory;
@property (readonly, nonatomic) long long pace;
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (readonly, nonatomic) long long catalog;
@property (readonly, copy, nonatomic) NSArray *entryPoints;
@property (readonly, nonatomic) id<PXDisplayAsset> artworkDisplayAsset;
@property (readonly, nonatomic) id<PXAudioAsset> previewAudioAsset;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
