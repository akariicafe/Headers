@class NSURLConnection, NSString, NSArray, NSURL, NSUserActivity, UIImage, NSMutableData;
@protocol WebClipDelegate;

@interface UIWebClip : NSObject {
    unsigned long long currentIconIndex;
    UIImage *iconImage;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
}

@property (copy) NSString *identifier;
@property (retain, nonatomic) NSURL *pageURL;
@property (retain) NSArray *icons;
@property (retain) NSURL *startupImageURL;
@property (retain) NSURL *startupLandscapeImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *placeholderBundleIdentifier;
@property (copy, nonatomic) NSURL *manifestId;
@property (copy, nonatomic) NSString *shortcutIdentifier;
@property (readonly, nonatomic) NSURL *applicationLaunchURL;
@property (readonly, nonatomic) NSUserActivity *appClipUserActivity;
@property (readonly, nonatomic) unsigned long long bundleVersion;
@property BOOL fullScreen;
@property BOOL classicMode;
@property BOOL removalDisallowed;
@property BOOL isAppClip;
@property BOOL scenelessBackgroundLaunch;
@property unsigned long long contentMode;
@property BOOL ignoreManifestScope;
@property BOOL configurationIsManaged;
@property (readonly) BOOL iconIsScreenShotBased;
@property (readonly) BOOL iconIsPrecomposed;
@property (readonly) BOOL iconIsPrerendered;
@property unsigned long long supportedOrientations;
@property long long statusBarStyle;
@property (nonatomic) unsigned long long webClipStatusBarStyle;
@property (readonly) NSString *iconImagePath;
@property (readonly, retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *startupImage;
@property (retain, nonatomic) UIImage *startupLandscapeImage;
@property (retain, nonatomic) UIImage *initialLaunchImage;
@property (weak, nonatomic) id<WebClipDelegate> delegate;

+ (id)appClips;
+ (id)webClipIconsForWebDocumentView:(id)a0;
+ (id)webClipWithURL:(id)a0;
+ (id)webClipTitleForWebDocumentView:(id)a0;
+ (id)_contentForMetaName:(id)a0 inWebDocumentView:(id)a1;
+ (id)_normalizedWebClipIdentifierFromBundleIdentifier:(id)a0;
+ (BOOL)_webClipFullScreenValueForMetaTagContent:(id)a0;
+ (id)_webClipLinkTagsFromWebDocumentView:(id)a0;
+ (unsigned long long)_webClipOrientationsForMetaTagContent:(id)a0;
+ (long long)_webClipStatusBarStyleForMetaTagContent:(id)a0;
+ (BOOL)bundleIdentifierContainsWebClipIdentifier:(id)a0;
+ (id)clipsIncludingWebClips:(BOOL)a0 includingAppClips:(BOOL)a1;
+ (id)pathForWebClipCacheWithIdentifier:(id)a0;
+ (id)pathForWebClipStorageWithIdentifier:(id)a0;
+ (id)pathForWebClipWithIdentifier:(id)a0;
+ (id)urlForWebClipWithIdentifier:(id)a0;
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)a0;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)a0;
+ (id)webClipIconsForWebClipLinkTags:(id)a0 pageURL:(id)a1;
+ (id)webClipIdentifierFromBundleIdentifier:(id)a0;
+ (unsigned long long)webClipOrientationsForWebDocumentView:(id)a0;
+ (long long)webClipStatusBarStyleForWebDocumentView:(id)a0;
+ (id)webClipWithIdentifier:(id)a0;
+ (id)webClips;
+ (id)webClipsDirectoryPath;

- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void)connectionDidFinishLoading:(id)a0;
- (id)_initWithIdentifier:(id)a0;
- (void)_reloadProperties;
- (id)_info;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)bundleIdentifier;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (void)configureWithMetaTags:(id)a0 linkTags:(id)a1;
- (BOOL)_writeImage:(id)a0 toDiskWithFileName:(id)a1;
- (id)_bundleImageWithName:(id)a0;
- (id)_bundleResourceWithName:(id)a0;
- (BOOL)_createApplicationRecord;
- (id)_createPlaceholderBundleIdentifier;
- (id)_launchURLWithScheme:(id)a0;
- (void)_readPropertiesFromBundle:(id)a0;
- (BOOL)_requiresPlaceholderBundle;
- (void)_setIconImage:(id)a0 isPrecomposed:(BOOL)a1 isScreenShotBased:(BOOL)a2;
- (void)cancelMediaUpdate;
- (void)coordinator:(id)a0 canceledWithReason:(id)a1 client:(unsigned long long)a2;
- (void)coordinatorDidCompleteSuccessfully:(id)a0 forApplicationRecord:(id)a1;
- (BOOL)createOnDisk;
- (BOOL)ensurePlaceholderBundle;
- (id)generateIconImageForFormat:(int)a0 scale:(double)a1;
- (id)getStartupImage:(long long)a0;
- (BOOL)removeFromDisk;
- (void)requestCustomIconUpdate;
- (void)requestCustomLandscapeStartupImageUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (void)requestIconUpdateInSpringBoard;
- (void)setContentModeWithString:(id)a0;
- (void)setIconImage:(id)a0 isPrecomposed:(BOOL)a1;
- (void)setIconImageFromScreenshot:(id)a0;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (BOOL)tryLoadingNextCustomIcon;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)a0;
- (void)updateCustomMediaLocationsWithWebClipLinkTags:(id)a0 baseURL:(id)a1;
- (BOOL)updateOnDisk;

@end
