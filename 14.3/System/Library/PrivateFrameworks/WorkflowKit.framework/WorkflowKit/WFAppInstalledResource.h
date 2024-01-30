@class NSString, ICApp, WFiTunesSessionManager, NSObject;
@protocol OS_dispatch_queue;

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver>

@property (retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) BOOL skipLookup;
@property (copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) ICApp *app;

+ (BOOL)mustBeAvailableForDisplay;
+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (void).cxx_destruct;
- (void)dealloc;
- (id)eventDictionary;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (id)appNotInstalledError;

@end
