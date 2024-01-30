@class NSString, NSArray, NSMutableArray;
@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
    NSString *_requiredComplianceClass;
    NSArray *_httpPorts;
    NSArray *_httpsPorts;
    NSString *_httpServiceString;
    NSString *_httpsServiceString;
    NSMutableArray *_discoveries;
}

@property (retain, nonatomic) NSString *wellKnownPath;
@property (retain, nonatomic) NSArray *potentialContextPaths;
@property (nonatomic) BOOL didReceiveAuthenticationError;
@property (retain, nonatomic) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;
@property (weak, nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate;
@property (nonatomic) BOOL shouldBailEarly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1 httpPorts:(id)a2 httpsPorts:(id)a3 httpServiceString:(id)a4 httpsServiceString:(id)a5 wellKnownPaths:(id)a6 requiredComplianceClass:(id)a7;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (void)taskGroupWillCancelWithError:(id)a0;
- (void)syncAway;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1 httpPorts:(id)a2 httpsPorts:(id)a3 httpServiceString:(id)a4 httpsServiceString:(id)a5 wellKnownPath:(id)a6 potentialContextPaths:(id)a7 requiredComplianceClass:(id)a8;
- (void)startSRVLookup:(id)a0 serviceString:(id)a1;
- (id)allDiscoveryPorts:(id)a0 withScheme:(id)a1;
- (void)startWellKnownLocationTask:(id)a0 withURL:(id)a1;
- (id)setupDiscoveries:(id)a0 withSchemes:(id)a1;
- (void)startPropfindTask:(id)a0;
- (id)allDiscoveryPaths:(id)a0;
- (void)completeDiscovery:(id)a0 error:(id)a1;
- (id)propFindProperties;
- (void)startWellKnownFallbackHeadTask:(id)a0 withURL:(id)a1;
- (void)noteDefinitiveAuthFailureFromTask:(id)a0;
- (void)propFindTaskFinished:(id)a0;
- (id)extractPrincipalURLFromPropFindTask:(id)a0 error:(id *)a1;
- (void)srvLookupTask:(id)a0 error:(id)a1;
- (void)completeOptionsTask:(id)a0 error:(id)a1;
- (void)startOptionsTask:(id)a0;
- (void)getDiscoveryStatus:(id)a0 priorFailed:(id *)a1 subsequentFailed:(id *)a2 priorIncomplete:(id *)a3 subsequentIncomplete:(id *)a4 priorSuccess:(id *)a5 subsequentSuccess:(id *)a6;
- (void)addToDiscoveryArray:(id *)a0 discovery:(id)a1;
- (void)optionsTask:(id)a0 error:(id)a1;
- (id)cleanedStringsFromResponseHeaders:(id)a0 forHeader:(id)a1;

@end
