@class NSString, NSArray, NSDictionary, HTSHTTPServer, NSMutableDictionary;
@protocol ADEmbeddedAdServerDelegate;

@interface ADEmbeddedAdServer : NSObject <HTSHTTPServerDelegate> {
    HTSHTTPServer *_server;
    NSMutableDictionary *_authTokens;
    struct __FSEventStream { } *_stream;
}

@property (nonatomic) id<ADEmbeddedAdServerDelegate> delegate;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *publicURLRoot;
@property (copy, nonatomic) NSString *adPath;
@property (nonatomic) BOOL alwaysRegenerateWebArchives;
@property (retain, nonatomic) NSArray *adManifests;
@property (retain, nonatomic) NSDictionary *defaultAdData;
@property (nonatomic) BOOL defaultsToNoQualifiedAds;
@property (nonatomic) BOOL digestAuthenticationEnabled;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) double kbps;
@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (nonatomic) BOOL pipeliningEnabled;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)adBundleAtURL:(id)a0 matchesRequest:(id)a1;
+ (id)creativesForAdBundleAtURL:(id)a0 matchingRequest:(id)a1;
+ (id)iAdDeviceModelForDeviceModel:(id)a0;
+ (id)supportedDevicesForAdProperties:(id)a0;
+ (BOOL)creativeTypeMatches:(id)a0 type:(int)a1 creativeType:(id)a2;
+ (id)manifestForAdAtURL:(id)a0;
+ (id)accessibilityDescriptionForAccessibilityKey:(id)a0;
+ (int)creativeTypeForPlistType:(id)a0;

- (id)init;
- (void)dealloc;
- (void)resetNetworkSetup;
- (void)httpServerListenSocketFailed:(id)a0;
- (void)httpServer:(id)a0 receivedConnection:(id)a1;
- (void)httpServer:(id)a0 closedConnection:(id)a1;
- (void)httpServer:(id)a0 closedConnection:(id)a1 withError:(id)a2;
- (id)httpServer:(id)a0 proposedResponse:(id)a1;
- (void)httpServer:(id)a0 logMessage:(id)a1;
- (id)_mimeTypeForExtension:(id)a0;
- (id)httpServer:(id)a0 rewritePath:(id)a1;
- (void)httpServer:(id)a0 connection:(id)a1 blockedSandboxViolation:(id)a2;
- (void)httpServer:(id)a0 dataForRequest:(id)a1 resolvedPath:(id)a2 handler:(id /* block */)a3;
- (BOOL)httpServer:(id)a0 shouldAllowRequest:(id)a1 withAuthorization:(id)a2;
- (id)httpServer:(id)a0 unhandledRequest:(id)a1;
- (void)httpServer:(id)a0 connection:(id)a1 enqueuedResponseToRequest:(id)a2 statusCode:(int)a3 length:(unsigned long long)a4;
- (void)httpServer:(id)a0 connection:(id)a1 wroteBytes:(unsigned long long)a2 forResponseToRequest:(id)a3 remaining:(unsigned long long)a4;
- (void)httpServer:(id)a0 connection:(id)a1 wroteBytes:(unsigned long long)a2 andCompletedResponseToRequest:(id)a3;
- (void)httpServer:(id)a0 connection:(id)a1 droppedResponseToRequestBeforeClosing:(id)a2;
- (id)webArchiveForDirectory:(id)a0 withBaseURL:(id)a1;
- (id)_handlePostRequest:(id)a0;
- (id)_handleGenericPostRequest:(id)a0;
- (id)_handleBatchRequest:(id)a0 message:(id)a1;
- (id)_handleLogImpressionRequest:(id)a0 message:(id)a1;
- (id)_handleLogSysEventRequest:(id)a0 message:(id)a1;
- (id)_handleLogAdEventRequest:(id)a0 message:(id)a1;
- (id)_handleLogAdContentErrorRequest:(id)a0 message:(id)a1;
- (id)_handleSegmentUpdateRequest:(id)a0 message:(id)a1;
- (id)_handleAdSpaceStatusEventRequest:(id)a0 message:(id)a1;
- (id)_handleServerErrorRequest:(id)a0 message:(id)a1;
- (id)_handleOptOutRequest:(id)a0 message:(id)a1;
- (id)_handleManifestRequest:(id)a0 message:(id)a1;
- (id)_handleMescalSignSAPSetupCertificateRequest:(id)a0 message:(id)a1;
- (id)_handleMescalSignSAPSetupRequest:(id)a0 message:(id)a1;
- (id)_handleLogAggregateMetricsRequest:(id)a0 message:(id)a1;
- (id)_handleConfigurationRequest:(id)a0 message:(id)a1;
- (id)_handleGenericAnalyticsRequest:(id)a0 message:(id)a1 type:(int)a2;
- (id)adDataForAdBundleAtPath:(id)a0 creative:(id)a1 requesterId:(id)a2 allowWebArchive:(BOOL)a3;
- (id)_defaultResponseForBatchRequest:(id)a0;
- (id)_webResourcesInDirectory:(id)a0 baseURL:(id)a1;
- (id)_webResourceForPath:(id)a0 url:(id)a1;
- (id)_integerColorFromStringColor:(id)a0;
- (id)_webArchiveFilenameForDirectory:(id)a0 withBaseURL:(id)a1;
- (id)_actionDictionaryFromProperties:(id)a0 path:(id)a1 error:(id *)a2;
- (BOOL)_tryAddingAdTagContentStringForCreative:(id)a0 toAdReponse:(id)a1 withAdPath:(id)a2;
- (id)_adDataForPath:(id)a0 creative:(id)a1 requester:(id)a2 error:(id *)a3;
- (id)initWithPort:(unsigned short)a0 adPath:(id)a1;

@end
