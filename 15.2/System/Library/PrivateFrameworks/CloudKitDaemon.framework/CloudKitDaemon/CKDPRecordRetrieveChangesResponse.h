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

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearChangedShares;
- (void)addChangedShare:(id)a0;
- (unsigned long long)changedSharesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addChangedRecord:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)changedRecordsCount;
- (void)clearChangedRecords;
- (id)changedShareAtIndex:(unsigned long long)a0;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
