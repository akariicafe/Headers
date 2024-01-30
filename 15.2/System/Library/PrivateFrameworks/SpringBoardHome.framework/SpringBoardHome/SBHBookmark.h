@class NSString, NSURL, CPSWebClip, UIWebClip;

@interface SBHBookmark : NSObject <SBLeafIconDataSource>

@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) CPSWebClip *appClip;
@property (readonly, nonatomic) BOOL isAppClip;
@property (readonly, nonatomic) BOOL isShortcutsWebClip;
@property (readonly, nonatomic) BOOL isSingleStepShortcutWebClip;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)iconSupportsUninstall:(id)a0;
- (BOOL)canGenerateIconsInBackgroundForIcon:(id)a0;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)a0;
- (unsigned long long)priorityForIcon:(id)a0;
- (id)icon:(id)a0 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (BOOL)iconCompleteUninstall:(id)a0;
- (void).cxx_destruct;
- (id)folderTitleOptionsForIcon:(id)a0;
- (id)folderFallbackTitleForIcon:(id)a0;
- (void)dealloc;
- (id)iTunesCategoriesOrderedByRelevancyForIcon:(id)a0;
- (BOOL)isUninstallSupported;
- (void)_deviceUnlockedForFirstTime:(id)a0;
- (void)_cleanupAppClipIfNecessary;
- (id)initWithWebClip:(id)a0;

@end
