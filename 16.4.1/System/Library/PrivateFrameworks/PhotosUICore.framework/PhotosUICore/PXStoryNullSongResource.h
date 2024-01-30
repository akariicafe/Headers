@class NSString;
@protocol PXAudioAsset;

@interface PXStoryNullSongResource : NSObject <PXStorySongResource>

@property (readonly, nonatomic) id<PXAudioAsset> px_storyResourceSongAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
