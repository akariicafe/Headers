@class NSString, NSURL, NSArray;
@protocol PXAudioAsset, PXDisplayAsset;

@interface PXFlexMusicAsset : NSObject <PXStorySongResource, PXMutableFlexMusicAsset, PXAudioAsset>

@property (readonly, nonatomic) id<PXAudioAsset> px_storyResourceSongAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetDuration;
@property (readonly, nonatomic) NSURL *artworkURL;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *assetTagsDescription;
@property (copy, nonatomic) NSString *colorGradeCategory;
@property (nonatomic) long long pace;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } exportableDuration;
@property (readonly, nonatomic) Class audioSessionClass;
@property (readonly, nonatomic) long long catalog;
@property (readonly, copy, nonatomic) NSArray *entryPoints;
@property (readonly, nonatomic) id<PXDisplayAsset> artworkDisplayAsset;
@property (readonly, nonatomic) id<PXAudioAsset> previewAudioAsset;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAudioEqualToAsset:(id)a0;

@end
