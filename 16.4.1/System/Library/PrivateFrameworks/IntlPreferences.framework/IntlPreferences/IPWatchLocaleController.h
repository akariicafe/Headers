@class NPSDomainAccessor, NSArray, NPSManager;

@interface IPWatchLocaleController : NSObject

@property (retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain;
@property (retain, nonatomic) NPSManager *syncManager;
@property (retain, nonatomic) NSArray *systemLanguages;

- (void)setLanguages:(id)a0;
- (void)setLocale:(id)a0;
- (BOOL)isMirroringEnabled;
- (id)preferredLanguages;
- (id)init;
- (void).cxx_destruct;
- (void)updateLocale:(id)a0;
- (id)deviceLanguage;
- (void)mirrorLanguagesAndLocaleToWatch;
- (void)resetTimeFormat;
- (id)initWithSystemLanguages:(id)a0;
- (void)initializeMirrorSettings;
- (void)postLocaleChangedNotification;

@end
