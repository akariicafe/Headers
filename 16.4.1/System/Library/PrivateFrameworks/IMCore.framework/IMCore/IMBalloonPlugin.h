@class NSBundle, NSMutableDictionary, NSString, NSMutableArray, IMBalloonApp;
@protocol PKPlugIn;

@interface IMBalloonPlugin : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) id<PKPlugIn> plugin;
@property (nonatomic) BOOL pluginLoaded;
@property (retain, nonatomic) IMBalloonApp *app;
@property (retain, nonatomic) NSMutableDictionary *messageToDatasourceMap;
@property (retain, nonatomic) NSMutableDictionary *messageToBalloonControllerMap;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSString *browserImageName;
@property (retain, nonatomic) NSString *browserImagePath;
@property (nonatomic) long long browserGroup;
@property (retain, nonatomic) NSMutableArray *balloonControllerPool;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *browserDisplayName;
@property (readonly, retain, nonatomic) NSString *browserShortDisplayName;
@property (readonly, retain, nonatomic) NSBundle *pluginBundle;
@property (readonly, retain, nonatomic) NSBundle *appBundle;
@property (readonly, nonatomic) BOOL showInBrowser;
@property (readonly, nonatomic) BOOL showableInBrowser;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL shouldHideAppSwitcher;
@property (readonly, nonatomic) unsigned long long presentationContexts;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic, getter=isBetaPlugin) BOOL betaPlugin;

- (void)unloadBundle;
- (id)initWithBundle:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)balloonControllerForChatItem:(id)a0 contextIdentifier:(id)a1;
- (id)dataSourceForPluginPayload:(id)a0;
- (id)existingBalloonControllerWithMessageGUID:(id)a0 contextIdentifier:(id)a1;
- (void)insertDataSource:(id)a0 forGUID:(id)a1;
- (BOOL)shouldShowForRecipients:(id)a0;
- (BOOL)supportsControllerReuse;
- (id)_getControllerFromReusePoolForChatItem:(id)a0 contextIdentifier:(id)a1;
- (id)balloonControllerKeyForMessageGUID:(id)a0 contextIdentifier:(id)a1;
- (id)existingDataSourceForMessageGUID:(id)a0;
- (id)initWithBundle:(id)a0 app:(id)a1;
- (BOOL)isStickerPackOnly;
- (void)moveController:(id)a0 toReusePoolFromChatItem:(id)a1 contextIdentifier:(id)a2;
- (void)removeController:(id)a0 forChatItem:(id)a1 contextIdentifier:(id)a2;

@end
