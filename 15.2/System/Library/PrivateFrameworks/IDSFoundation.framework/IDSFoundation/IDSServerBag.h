@class NSDate, NSString, NSURL, IDSRemoteURLConnection, NSData, NSArray, NSDictionary, NSMutableDictionary, IMConnectionMonitor, NSObject, NSNumber, NSMutableURLRequest;
@protocol OS_dispatch_queue;

@interface IDSServerBag : NSObject

@property (retain) IMConnectionMonitor *_connectionMonitor;
@property (retain) NSURL *bagURL;
@property (retain) NSString *apsEnvironmentName;
@property (retain, setter=_setBag:) NSDictionary *_bag;
@property (retain, setter=_setCachedBag:) NSDictionary *_cachedBag;
@property (retain) NSMutableURLRequest *_urlRequest;
@property (retain, setter=_setCachedURLString:) NSString *_cachedURLString;
@property (retain, setter=_setCachedHash:) NSString *_cachedHash;
@property (retain) NSDate *_loadDate;
@property (retain) NSNumber *_cacheTime;
@property (retain) IDSRemoteURLConnection *_remoteURLConnection;
@property (copy) id /* block */ remoteURLCreationBlock;
@property (copy) id /* block */ connectionMonitorCreationBlock;
@property (retain) NSObject<OS_dispatch_queue> *_bagQueue;
@property (setter=_setTrustStatus:) int _trustStatus;
@property (retain) NSData *_certData;
@property BOOL allowSelfSignedCertificates;
@property BOOL allowUnsignedBags;
@property int token;
@property unsigned long long hasPairedDeviceState;
@property (retain) NSData *serverSignature;
@property (retain) NSArray *serverCerts;
@property (retain) NSData *serverGivenBag;
@property char hashAlgorithm;
@property (retain) NSMutableDictionary *overrideValues;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;
@property (readonly) BOOL isInDebilitatedMode;
@property (readonly) BOOL requiresIDSHost;
@property (readonly) BOOL requiresIDSConnection;
@property (readonly) BOOL isServerAvailable;

+ (id)sharedInstance;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)a0;
+ (id)sharedInstanceForBagType:(long long)a0;
+ (id)_bagCreationLock;
+ (id)defaultBag;

- (unsigned long long)_bagDomain;
- (void)connectionMonitorDidUpdate:(id)a0;
- (void)_bagExternallyReloaded;
- (void)_invalidate;
- (void)_clearCache;
- (BOOL)trustRefFromCertificates:(id)a0 canReportFailure:(BOOL)a1 trustRef:(struct __SecTrust **)a2;
- (void)__saveCacheToPrefs;
- (void)_loadFromCache;
- (void)_saveCacheToPrefs;
- (id)_initWithURL:(id)a0 apsEnvironmentName:(id)a1 allowSelfSignedCertificates:(BOOL)a2 allowUnsignedBags:(BOOL)a3 hashAlgorithm:(char)a4 remoteURLCreationBlock:(id /* block */)a5 connectionMonitorCreationBlock:(id /* block */)a6;
- (void)_saveToCache;
- (BOOL)_allowedToLoadBag;
- (BOOL)_allowInvalid;
- (BOOL)_loadFromDictionary:(id)a0 returningError:(id *)a1;
- (BOOL)_loadFromSignedDictionary:(id)a0 returningError:(id *)a1;
- (void)_generateURLRequest;
- (void)_cancelCurrentLoad;
- (id)_initWithURL:(id)a0 apsEnvironmentName:(id)a1 allowSelfSignedCertificates:(BOOL)a2 allowUnsignedBags:(BOOL)a3 hashAlgorithm:(char)a4;
- (void)_processBagResultData:(id)a0 response:(id)a1 inBackground:(BOOL)a2;
- (void)_startBagLoad:(BOOL)a0;
- (BOOL)_forceAllowBagLoading;
- (void)_clearOverrideValues;
- (void)_setOverrideValue:(id)a0 forKey:(id)a1;
- (id)_overrideValues;
- (void)startBagLoad;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)forceBagLoad;
- (id)_bagDefaultsDomain;
- (id)urlWithKey:(id)a0;
- (void)dealloc;

@end
