@class NSData, NSString, NSURL, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, CRFDRBaseDeviceHandler, NSNumber;
@protocol setupModuleChallengeCallBack;

@interface CRFDRSeal : NSObject <CRFDR> {
    NSString *currentSerialNumber;
    NSString *currentMLBSerialNumber;
    NSDictionary *claimDict;
    NSDictionary *updateClassDict;
    NSDictionary *makeClassDict;
    NSString *KBBSerialNumber;
    NSString *KGBSerialNumber;
    NSString *FDRCAURL;
    NSString *trustObjectURL;
    NSString *FDRDSURL;
    NSString *FDRSealingURL;
    BOOL doSeal;
    BOOL enableProxy;
    NSURL *dataDirectoryURL;
    NSDictionary *metadataDict;
    NSSet *partSPC;
    NSMutableArray *makeDataClasses;
    NSMutableArray *makeDataInstances;
    NSDictionary *updateProperties;
    NSDictionary *manifestDataClassesAndInstances;
    NSSet *overridePropertySet;
    NSDictionary *makeProperties;
    NSMutableDictionary *postSealingManifest;
    NSMutableDictionary *preSealingManifest;
    NSString *FDRPersistentDataPath;
    NSMutableDictionary *mergedDict;
    NSString *sealedDataInstance;
    NSMutableArray *mergedDataClasses;
    NSMutableArray *mergedDataInstances;
    NSMutableDictionary *networkUsage;
    NSMutableDictionary *repairStats;
    int sealCount;
    NSString *SOCKSHost;
    NSNumber *SOCKSPort;
}

@property (retain, nonatomic) NSData *apTicketData;
@property (weak, nonatomic) id<setupModuleChallengeCallBack> delegate;
@property (retain, nonatomic) CRFDRBaseDeviceHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentProcessHasEntitlement:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameters:(id)a0;
- (long long)seal:(id *)a0 oldSealingManifest:(id *)a1 newSealingManifest:(id *)a2 stats:(id *)a3;
- (id)_getCRFDRMetaDataDictionary;
- (BOOL)_urlsOverrideIsAllowed;
- (long long)sealWithDataClass:(id)a0 fdrError:(id *)a1 registerOnly:(BOOL)a2;
- (id)_setLocalAndRemotePermission:(struct __AMFDR { } *)a0 fdrRemote:(struct __AMFDR { } *)a1 manifestDataClassesAndInstances:(id)a2;
- (id)_baseFDROptionsWithDataStore:(id)a0;
- (long long)setLocalAndRemoteTrustObject:(struct __AMFDR { } *)a0 fdrLocal:(struct __AMFDR { } *)a1 remoteTrustObjectDigest:(id)a2 fdrError:(id *)a3;
- (long long)prefetchPermissionsWith:(struct __AMFDR { } *)a0 claimClassDict:(id)a1 returnError:(id *)a2;
- (long long)performHTTPChallengeClaim:(struct __AMFDR { } *)a0 fdrLocal:(struct __AMFDR { } *)a1 fdrError:(id *)a2 claimClassDict:(id)a3 registerOnly:(BOOL)a4;
- (id)extractNetworkUsage;
- (long long)CRFDRVerifyLocal:(struct __AMFDR { } *)a0 fdrRemote:(struct __AMFDR { } *)a1 sealedData:(struct __AMFDRSealedData **)a2 mergedDataClasses:(id)a3 mergedDataInstances:(id)a4 currentManifestProperties:(id)a5 fdrError:(id *)a6 syncEAN:(BOOL)a7;
- (long long)prefetchPermissionsForSealingWith:(struct __AMFDR { } *)a0 fdrLocal:(struct __AMFDR { } *)a1 returnError:(id *)a2;
- (long long)performMakeAndRecover:(struct __AMFDR { } *)a0 fdrLocal:(struct __AMFDR { } *)a1 fdrError:(id *)a2;
- (long long)performPartialRepairSealing:(struct __AMFDR { } *)a0 fdrLocal:(struct __AMFDR { } *)a1 fdrError:(id *)a2;
- (long long)_fetchRemoteTrustObject:(struct __AMFDR { } *)a0 apTrustObjectDigest:(id)a1 remoteTrustObject:(const struct __CFData **)a2 fdrError:(id *)a3;
- (long long)CRFDRDataRepairRecover:(struct __AMFDR { } *)a0 fdrRemote:(struct __AMFDR { } *)a1 fdrError:(id *)a2;
- (BOOL)_commitMakedata:(id)a0 fdrlocal:(struct __AMFDR { } *)a1 fdrError:(id *)a2;
- (long long)CRFDRLocalPopulate:(struct __AMFDR { } *)a0 fdrRemote:(struct __AMFDR { } *)a1 sealedData:(struct __AMFDRSealedData **)a2 fdrError:(id *)a3;
- (void)_logSealingRequest:(struct __AMFDRSealedData { } *)a0;
- (long long)_commitSealedData:(struct __AMFDR { } *)a0 fdrRemote:(struct __AMFDR { } *)a1 sealedData:(struct __AMFDRSealedData { } *)a2 returnError:(id *)a3;
- (long long)CRFDRVerifyProperties:(struct __AMFDR { } *)a0 currentManifestProperties:(id)a1 fdrError:(id *)a2;
- (long long)registerChangeForComponent:(id)a0 fdrError:(id *)a1;
- (id)initForRegisterChangeWithParameters:(id)a0;

@end
