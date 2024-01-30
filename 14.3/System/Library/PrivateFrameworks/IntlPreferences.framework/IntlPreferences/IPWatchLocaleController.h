@class NPSDomainAccessor, NSArray, NPSManager;

@interface IPWatchLocaleController : NSObject

@property (retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain;
@property (retain, nonatomic) NPSManager *syncManager;
@property (retain, nonatomic) NSArray *systemLanguages;

- (id)preferredLanguages;
- (id)init;
- (void).cxx_destruct;
- (id)deviceLanguage;
- (void)setLocale:(id)a0;
- (void)updateLocale:(id)a0;
- (void)setLanguages:(id)a0;
- (id)initWithSystemLanguages:(id)a0;
- (void)resetTimeFormat;
- (void)postLocaleChangedNotification;
- (void)mirrorLanguagesAndLocaleToWatch;
- (void)initializeMirrorSettings;

@end
