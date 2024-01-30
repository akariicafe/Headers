@class NSString, BMProcessCrashException, BMProcessCrashTerminationReason;

@interface BMProcessCrash : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *incidentID;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) BMProcessCrashException *exception;
@property (readonly, nonatomic) BMProcessCrashTerminationReason *terminationReason;
@property (readonly, nonatomic) NSString *responsibleApp;
@property (readonly, nonatomic) NSString *coalitionName;
@property (readonly, nonatomic) BOOL isFirstParty;
@property (nonatomic) BOOL hasIsFirstParty;
@property (readonly, nonatomic) BOOL isBeta;
@property (nonatomic) BOOL hasIsBeta;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithIncidentID:(id)a0 processName:(id)a1 bundleID:(id)a2 appVersion:(id)a3 bundleVersion:(id)a4 exception:(id)a5 terminationReason:(id)a6 responsibleApp:(id)a7;
- (id)initWithIncidentID:(id)a0 processName:(id)a1 bundleID:(id)a2 appVersion:(id)a3 bundleVersion:(id)a4 exception:(id)a5 terminationReason:(id)a6 responsibleApp:(id)a7 coalitionName:(id)a8;
- (id)initWithIncidentID:(id)a0 processName:(id)a1 bundleID:(id)a2 appVersion:(id)a3 bundleVersion:(id)a4 exception:(id)a5 terminationReason:(id)a6 responsibleApp:(id)a7 coalitionName:(id)a8 isFirstParty:(id)a9 isBeta:(id)a10;

@end
