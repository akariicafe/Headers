@class NSString, NSData, NSMutableArray;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    struct { unsigned char sequenceNumber : 1; unsigned char statusCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasRestoreIdentifier;
@property (retain, nonatomic) NSData *restoreIdentifier;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) BOOL hasDefaultSourceBundleIdentifier;
@property (retain, nonatomic) NSString *defaultSourceBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *obliteratedHealthPairingUUIDs;

+ (Class)obliteratedHealthPairingUUIDsType;
+ (id)activationRestoreWithRestoreUUID:(id)a0 sequenceNumber:(long long)a1 statusCode:(int)a2;
+ (id)retreiveFromPersistentUserInfo:(id)a0;
+ (id)persistentUserInfoKey;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasRequiredFields;
- (void)copyTo:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)addObliteratedHealthPairingUUIDs:(id)a0;
- (unsigned long long)obliteratedHealthPairingUUIDsCount;
- (void)clearObliteratedHealthPairingUUIDs;
- (id)obliteratedHealthPairingUUIDsAtIndex:(unsigned long long)a0;
- (id)nanoSyncDescription;
- (void)encodeObliteratedHealthPairingUUIDs:(id)a0;
- (id)decodedObliteratedHealthPairingUUIDs;
- (id)decodedRestoreUUID;
- (void)addToPersistentUserInfo:(id)a0;
- (id)copyForPersistentUserInfo;

@end
