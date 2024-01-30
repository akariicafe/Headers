@class NSNumber, NSBundle, NSString;
@protocol PKPlugIn;

@interface IMBalloonApp : NSObject

@property (nonatomic) BOOL canSendDataPayloads;
@property (nonatomic) BOOL isLaunchProhibited;
@property (nonatomic) BOOL showInBrowser;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL shouldBalloonHideAppIcon;
@property (nonatomic) BOOL shouldHideAppSwitcher;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSBundle *pluginBundle;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSString *browserDisplayName;
@property (retain, nonatomic) NSString *browserShortDisplayName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<PKPlugIn> plugin;
@property (nonatomic) unsigned long long presentationContexts;
@property (nonatomic) BOOL pluginLoaded;
@property (nonatomic) BOOL isEnabledUnremovableApp;
@property (readonly, nonatomic) BOOL isBetaPlugin;
@property (readonly, nonatomic) BOOL isStickerPackOnly;
@property (readonly, nonatomic) BOOL showableInBrowser;
@property (readonly, nonatomic) NSString *version;

+ (void)_setUnremovableDisabledApps:(id)a0;
+ (id)_unremovableDisabledApps;
+ (id)appWithPluginBundle:(id)a0;
+ (id)appWithPluginBundle:(id)a0 appBundle:(id)a1;
+ (id)appWithPluginBundle:(id)a0 extension:(id)a1;
+ (id)appWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
+ (unsigned long long)presentationContextsForInfoPlistArray:(id)a0 isStickerPackOnly:(BOOL)a1;

- (void)_loadBundle;
- (void).cxx_destruct;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;

@end
