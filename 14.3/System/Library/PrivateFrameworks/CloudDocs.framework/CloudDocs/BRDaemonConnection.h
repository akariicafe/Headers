@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)initialize;
+ (id)t_connectionForUUID:(id)a0;
+ (void)t_setDefaultConnection:(id)a0;
+ (void)t_setMobileDocumentsURL:(id)a0;
+ (void)invalidateCachedURLProperties;
+ (id)defaultConnectionIfExists;
+ (id)secondaryConnectionIfExists;
+ (id)mobileDocumentsURL;
+ (id)secondaryConnection;
+ (id)homeDirectoryURL;
+ (id)defaultConnection;
+ (id)syncedRootURLs;
+ (id)syncedDesktopURL;
+ (id)syncedDocumentsURL;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsCachesURL;

- (void).cxx_destruct;
- (id)newSyncTokenProxy;
- (id)initUsingUserLocalDaemon;
- (void)_setupAndResume;
- (id)newSyncProxy;
- (id)initUsingUserLocalDaemonTokenService;

@end
