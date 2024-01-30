@class NSString, NSDictionary, NSArray, AVTCoreModelGroup, AVTAvatarAttributeEditorPreviewMode;

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *symbolNames;
@property (readonly, nonatomic) AVTCoreModelGroup *modelGroup;
@property (readonly, copy, nonatomic) NSArray *sectionProviders;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) id /* block */ symbolNameProvider;
@property (readonly, nonatomic) AVTAvatarAttributeEditorPreviewMode *previewMode;

@end
