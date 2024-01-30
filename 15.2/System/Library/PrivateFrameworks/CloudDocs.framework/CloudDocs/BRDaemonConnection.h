@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)initialize;
+ (void)t_setMobileDocumentsURL:(id)a0;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDocumentsURL;
+ (id)cloudDocsAppSupportURL;
+ (id)t_connectionForUUID:(id)a0;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)invalidateCachedURLProperties;
+ (id)defaultConnectionIfExists;
+ (id)defaultConnection;
+ (id)syncedRootURLs;
+ (id)homeDirectoryURL;
+ (void)t_setDefaultConnection:(id)a0;
+ (id)cloudDocsCachesURL;
+ (id)secondaryConnection;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnectionIfExists;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURL;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURL;

- (id)initUsingUserLocalDaemon;
- (id)newSyncProxy;
- (void).cxx_destruct;
- (id)initUsingUserLocalDaemonTokenService;
- (void)_setupAndResume;
- (id)newSyncTokenProxy;

@end
