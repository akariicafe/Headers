@class NSData, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char pendingArchivedRecords : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedRecords;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *changedShares;
@property (nonatomic) BOOL hasPendingArchivedRecords;
@property (nonatomic) BOOL pendingArchivedRecords;

+ (Class)changedRecordType;
+ (Class)changedShareType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addChangedRecord:(id)a0;
- (void)addChangedShare:(id)a0;
- (unsigned long long)changedRecordsCount;
- (void)clearChangedRecords;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)changedSharesCount;
- (void)clearChangedShares;
- (id)changedShareAtIndex:(unsigned long long)a0;

@end
