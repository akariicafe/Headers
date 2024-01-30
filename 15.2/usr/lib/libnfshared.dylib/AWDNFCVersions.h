@class NSString;

@interface AWDNFCVersions : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _hardwareType;
    unsigned int _middlewareVersion;
    unsigned int _nfccFWRevision;
    unsigned int _nfccFWVersion;
    unsigned int _nfccHWVersion;
    unsigned int _nfccROMVersion;
    NSString *_platformVersion;
    unsigned int _seAvailableIndices;
    unsigned int _seDeviceType;
    unsigned int _seFWVersion;
    unsigned int _seHWVersion;
    unsigned int _seMigrationInst;
    unsigned int _seMigrationPkgs;
    unsigned int _seMigrationState;
    unsigned int _seOSMode;
    unsigned int _seReferenceCounter;
    unsigned int _seRestrictedMode;
    unsigned int _seSequenceCounter;
    unsigned int _seSignKeyType;
    unsigned int _seTotalIndices;
    unsigned int _seTransientDeselect;
    unsigned int _seTransientPersistent;
    unsigned int _seTransientReset;
    unsigned int _seosHWVersion;
    unsigned int _seosMigrationState;
    unsigned int _seosOSMode;
    unsigned int _seosOSVersion;
    NSString *_seosPlatformID;
    unsigned int _seosSignKeyType;
    unsigned int _seosTransientDeselect;
    unsigned int _seosTransientPersistent;
    unsigned int _seosTransientReset;
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char middlewareVersion : 1; unsigned char nfccFWRevision : 1; unsigned char nfccFWVersion : 1; unsigned char nfccHWVersion : 1; unsigned char nfccROMVersion : 1; unsigned char seAvailableIndices : 1; unsigned char seDeviceType : 1; unsigned char seFWVersion : 1; unsigned char seHWVersion : 1; unsigned char seMigrationInst : 1; unsigned char seMigrationPkgs : 1; unsigned char seMigrationState : 1; unsigned char seOSMode : 1; unsigned char seReferenceCounter : 1; unsigned char seRestrictedMode : 1; unsigned char seSequenceCounter : 1; unsigned char seSignKeyType : 1; unsigned char seTotalIndices : 1; unsigned char seTransientDeselect : 1; unsigned char seTransientPersistent : 1; unsigned char seTransientReset : 1; unsigned char seosHWVersion : 1; unsigned char seosMigrationState : 1; unsigned char seosOSMode : 1; unsigned char seosOSVersion : 1; unsigned char seosSignKeyType : 1; unsigned char seosTransientDeselect : 1; unsigned char seosTransientPersistent : 1; unsigned char seosTransientReset : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
