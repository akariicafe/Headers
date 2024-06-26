@class NSObject, NSString, NSMutableString, NSMutableSet, NSMutableDictionary, AnalyticsWorkspace, ImpoExpoService;
@protocol OS_dispatch_queue, CLIPSShimDelegate;

@interface CLIPSShim : NSObject {
    AnalyticsWorkspace *_clipsWorkspace;
    ImpoExpoService *_ieService;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int strongAddressType;
@property (nonatomic) void *environment;
@property (nonatomic) struct { int re_magic; unsigned long long re_nsub; char *re_endp; struct re_guts *re_g; } consoleNameRegex;
@property (nonatomic) struct { int re_magic; unsigned long long re_nsub; char *re_endp; struct re_guts *re_g; } dumpStringRegex;
@property (retain, nonatomic) NSMutableString *dumpedString;
@property (retain, nonatomic) NSMutableString *consoleContents;
@property (retain, nonatomic) NSString *currentCommand;
@property (nonatomic) unsigned long long commandStringLoc;
@property (retain, nonatomic) NSMutableSet *clipsHeldObjects;
@property (retain, nonatomic) NSMutableDictionary *invocationMap;
@property (retain, nonatomic) NSMutableDictionary *pendingOTAUpdates;
@property (weak, nonatomic) id<CLIPSShimDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *modules;

+ (id)sharedInstance;
+ (struct _CCCryptor { } *)cryptor;
+ (id)decodeAndInflateCLIPSString:(id)a0;
+ (id)decryptCLIPSData:(id)a0 forModule:(id)a1;
+ (id)dataSectionNameForModule:(id)a0;
+ (id)createDecryptedCLPData:(const void *)a0 length:(unsigned long long)a1;

- (void)log:(id)a0;
- (long long)run:(long long)a0;
- (void)logMemoryStatistics:(id)a0;
- (id)parseCLIPSModuleInfoFromConstructs:(id)a0;
- (void)logMemoryStatistics:(id)a0 verboseOnly:(BOOL)a1;
- (void)releaseFact:(void *)a0;
- (void)clear;
- (id)loadDataSection:(id)a0;
- (id)currentModule;
- (BOOL)addModuleNamed:(id)a0 withConstruct:(id)a1;
- (void)updateAllModuleInfos;
- (void)pushFocus:(id)a0;
- (unsigned long long)factCount;
- (BOOL)loadConstructsForModule:(id)a0;
- (void)logFacts:(long long)a0;
- (void)retractFact:(void *)a0;
- (void)unloadConstructsForModule:(id)a0 unconditionally:(BOOL)a1;
- (id)swapConsoleBuffer:(id)a0;
- (long long)run;
- (id)slotsStringForTemplate:(id)a0 fromDictionary:(id)a1 moduleName:(id)a2;
- (id)printedFacts:(id)a0 limit:(long long)a1;
- (id)otaUpdatePlatformStringForDeviceClass:(long long)a0;
- (id)moduleRulesByName:(id)a0;
- (id)moduleNames;
- (void)listAllDeftemplates;
- (void)setOTAUpdate:(id)a0 version:(id)a1 module:(id)a2;
- (id)setCurrentModule:(id)a0;
- (void *)getNextFact:(void *)a0;
- (BOOL)addNewConstruct:(id)a0;
- (long long)releaseAllFreeMemory;
- (id)deftemplatesMatchingPrefix:(id)a0;
- (long long)memoryUsed;
- (void)retainFact:(void *)a0;
- (id)objectForDO:(struct dataObject { void *x0; unsigned short x1; void *x2; long long x3; long long x4; struct dataObject *x5; } *)a0;
- (BOOL)initializeWorkspace;
- (void)updateModuleInfoForModule:(id)a0 slotValues:(id)a1;
- (id)getValueForSlotNamed:(id)a0 fromFact:(void *)a1;
- (void *)addObjectToEnvironment:(id)a0;
- (void)removeCallbackInvocation:(id)a0;
- (void)setCommandString:(id)a0;
- (BOOL)conservePrettyPrintMemory:(BOOL)a0;
- (void)registerCallbackFunction:(id)a0 selector:(SEL)a1 target:(id)a2;
- (id)dumpEngineStatusWithContext:(id)a0;
- (void).cxx_destruct;
- (id)factDictionaryForFact:(void *)a0;
- (id)init;
- (void)reportError:(id)a0;
- (void)deactivateModule:(id)a0;
- (BOOL)factIsImportant:(id)a0;
- (id)factStringForFactDictionary:(id)a0;
- (void *)deftemplateNamed:(id)a0 moduleName:(id)a1;
- (void)performOnFactsWithDeftemplateName:(id)a0 usingBlock:(id /* block */)a1;
- (id)objectFromMultifieldArg:(void *)a0 start:(long long)a1 end:(long long)a2;
- (int)executeBatchCommand:(id)a0 module:(id)a1;
- (long long)constructLoadStateForModule:(id)a0;
- (id)stringFromConstructsLoadState:(long long)a0;
- (id)currentRuleName;
- (void)addCallbackInvocation:(id)a0 invocation:(id)a1;
- (void)_logFactsForModule:(id)a0 limit:(long long)a1 when:(long long)a2;
- (void)dealloc;
- (void *)assertFactString:(id)a0 moduleName:(id)a1;
- (id)matchFactsWithDeftemplateName:(id)a0 withSlotKeyValues:(id)a1;
- (void)reset;
- (void)executeCommand:(id)a0 moduleName:(id)a1;
- (void)setQueue:(id)a0;
- (id)consoleBuffer;

@end
