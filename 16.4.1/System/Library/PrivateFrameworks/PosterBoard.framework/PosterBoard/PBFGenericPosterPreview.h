@class PBFGalleryOptions, NSString, PRPosterTitleStyleConfiguration, NSArray, PRPosterRenderingConfiguration, PRPosterHomeScreenConfiguration, PRPosterFocusConfiguration;
@protocol PBFPosterDescriptorLookupInfo, PBFComplicationLookupInfo;

@interface PBFGenericPosterPreview : NSObject <PBFPosterPreview, NSCopying> {
    unsigned long long _hash;
    unsigned long long _cachedGalleryPresentationStyle;
}

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

+ (id)testPosterPreviewWithLocalizedTitle:(id)a0 description:(id)a1;
+ (id)posterPreviewWithUniqueIdentifier:(id)a0 displayNameLocalizationKey:(id)a1 galleryLocalizedTitle:(id)a2 galleryLocalizedDescription:(id)a3 posterDescriptorLookupInfo:(id)a4 titleStyleConfiguration:(id)a5 focusConfiguration:(id)a6 subtitleComplication:(id)a7 suggestedComplications:(id)a8 complicationLayoutType:(id)a9 renderingConfiguration:(id)a10 homeScreenConfiguration:(id)a11 previewType:(id)a12 galleryOptions:(id)a13;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
