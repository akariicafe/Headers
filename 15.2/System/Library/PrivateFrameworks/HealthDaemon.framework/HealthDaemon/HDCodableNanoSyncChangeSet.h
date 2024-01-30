@class NSString, HDCodableError, NSData, NSMutableArray;

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {
    struct { unsigned char sessionStartDate : 1; unsigned char statusCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *changes;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (nonatomic) BOOL hasSessionStartDate;
@property (nonatomic) double sessionStartDate;
@property (readonly, nonatomic) BOOL hasSessionError;
@property (retain, nonatomic) HDCodableError *sessionError;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;

+ (Class)changesType;
+ (id)changeSetWithChanges:(id)a0 sessionUUID:(id)a1 startDate:(id)a2 sessionError:(id)a3 statusCode:(int)a4;
+ (id)retreiveFromPersistentUserInfo:(id)a0;
+ (id)persistentUserInfoKey;

- (unsigned long long)changesCount;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (void)addChanges:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)clearChanges;
- (id)changesAtIndex:(unsigned long long)a0;
- (id)nanoSyncDescription;
- (id)decodedSessionUUID;
- (id)decodedSessionStartDate;
- (id)decodedSessionError;
- (void)addToPersistentUserInfo:(id)a0;
- (id)copyForPersistentUserInfo;

@end
