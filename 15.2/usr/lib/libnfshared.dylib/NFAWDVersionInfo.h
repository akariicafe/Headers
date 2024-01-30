@class NSString, AWDNFCVersions;

@interface NFAWDVersionInfo : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int nfccHWVersion;
@property (nonatomic) unsigned int nfccROMVersion;
@property (nonatomic) unsigned int nfccFWVersion;
@property (nonatomic) unsigned int nfccFWRevision;
@property (nonatomic) unsigned int nfccMWVersion;
@property (nonatomic) unsigned int nfccHardwareType;
@property (retain, nonatomic) NSString *sePlatformId;
@property (nonatomic) unsigned int seDeviceType;
@property (nonatomic) unsigned int seHWVersion;
@property (nonatomic) unsigned int seFWVersion;
@property (nonatomic) unsigned int seSignKeyType;
@property (nonatomic) unsigned int seSeqCount;
@property (nonatomic) unsigned int seRefCount;
@property (nonatomic) unsigned int seOSMode;
@property (nonatomic) unsigned int seRestrictedMode;
@property (nonatomic) unsigned int seMigrationState;
@property (nonatomic) unsigned int seMigrationPkgs;
@property (nonatomic) unsigned int seMigrationInst;
@property (nonatomic) unsigned int seTransientDeselect;
@property (nonatomic) unsigned int seTransientReset;
@property (nonatomic) unsigned int seTransientPersistent;
@property (nonatomic) unsigned int seAvailableIndices;
@property (nonatomic) unsigned int seTotalIndices;
@property (retain, nonatomic) NSString *seosPlatformID;
@property (nonatomic) unsigned int seosHWVersion;
@property (nonatomic) unsigned int seosOSVersion;
@property (nonatomic) unsigned int seosOSMode;
@property (nonatomic) unsigned int seosSignKeyType;
@property (nonatomic) unsigned int seosMigrationState;
@property (nonatomic) unsigned int seosTransientDeselect;
@property (nonatomic) unsigned int seosTransientReset;
@property (nonatomic) unsigned int seosTransientPersistent;
@property (retain, nonatomic) AWDNFCVersions *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
