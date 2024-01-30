@class NSString, NSArray, PRPosterTitleStyleConfiguration, PRPosterHomeScreenConfiguration, PBFGalleryOptions, PRPosterRenderingConfiguration, PRPosterFocusConfiguration, PRPosterConfiguration;
@protocol PBFPosterDescriptorLookupInfo, PBFComplicationLookupInfo;

@interface PBFPosterConfigurationGalleryPreview : NSObject <PBFPosterPreview>

@property (readonly, nonatomic) PRPosterConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *previewUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *galleryLocalizedTitle;
@property (readonly, copy, nonatomic) NSString *galleryLocalizedDescription;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) id<PBFPosterDescriptorLookupInfo> posterDescriptorLookupInfo;
@property (readonly, copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (readonly, copy, nonatomic) id<PBFComplicationLookupInfo> subtitleComplication;
@property (readonly, copy, nonatomic) NSString *complicationLayoutType;
@property (readonly, copy, nonatomic) NSArray *suggestedComplications;
@property (readonly, copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (readonly, copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration;
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (readonly, copy, nonatomic) PBFGalleryOptions *galleryOptions;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 extension:(id)a1;

@end
