@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)extensionForIdentifier:(id)a0;
- (id)extensionManager;
- (id)availableDiagnosticExtensions;
- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;
- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (BOOL)isDiagnosticExtensionAvailable;

@end
