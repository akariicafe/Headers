@class UIColor, NSString, PFPosterConfiguration, NSURL, PFPosterDescriptor;
@protocol PUPosterOverrideConfiguration;

@interface _PUWallpaperPosterEditorDebugEnvironment : NSObject <PUWallpaperEditorEnvironment>

@property (retain, nonatomic) UIColor *pu_caseColor;
@property (nonatomic) long long pu_userInterfaceStyle;
@property (retain, nonatomic) NSString *pu_selectedToolbarItemIdentifier;
@property (retain, nonatomic) PFPosterDescriptor *posterDescriptor;
@property (retain, nonatomic) PFPosterConfiguration *sourcePosterConfiguration;
@property (retain, nonatomic) NSURL *sourceAssetDirectory;
@property (retain, nonatomic) NSURL *targetAssetDirectory;
@property (nonatomic) unsigned long long legacyConfigurationType;
@property (retain, nonatomic) id<PUPosterOverrideConfiguration> overrideConfiguration;
@property (readonly, nonatomic) long long pu_posterType;
@property (readonly, nonatomic) NSURL *pu_sourceAssetDirectory;
@property (readonly, nonatomic) NSURL *pu_targetAssetDirectory;
@property (readonly, nonatomic) PFPosterDescriptor *pu_posterDescriptor;
@property (readonly, nonatomic) PFPosterConfiguration *pu_sourcePosterConfiguration;
@property (readonly, nonatomic) unsigned long long pu_legacyConfigurationType;
@property (readonly, nonatomic) id<PUPosterOverrideConfiguration> pu_overrideConfiguration;
@property (readonly, nonatomic) unsigned long long pu_significantEventsCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
