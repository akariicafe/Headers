@class NSString;
@protocol PXDisplayAsset;

@interface PXStoryConcreteFrameFillingEffectResource : PXStoryConcreteResource <PXStoryFrameFillingEffectResource>

@property (readonly, nonatomic) id<PXDisplayAsset> px_storyResourceDisplayAsset;
@property (readonly, nonatomic) BOOL px_storyResourceUseSmartColor;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
