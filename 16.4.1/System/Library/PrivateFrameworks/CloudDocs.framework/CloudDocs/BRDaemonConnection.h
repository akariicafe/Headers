@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)homeDirectoryURL;
+ (void)initialize;
+ (void)clearURLCache;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnection;
+ (void)t_setMobileDocumentsURL:(id)a0;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURL;
+ (id)cloudDocsCachesURL;
+ (void)invalidateCachedURLProperties;
+ (id)t_connectionForUUID:(id)a0;
+ (id)syncedDesktopURL;
+ (id)defaultConnectionIfExists;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDocumentsURL;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (void)t_setDefaultConnection:(id)a0;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnection;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)syncedRootURLs;
+ (id)secondaryConnectionIfExists;

- (id)newSyncTokenProxy;
- (void)_setupAndResume;
- (id)newSyncProxy;
- (id)initUsingUserLocalDaemonTokenService;
- (id)initUsingUserLocalDaemon;
- (id)newLegacySyncProxy;
- (id)newFPFSSyncProxy;
- (void).cxx_destruct;

@end
