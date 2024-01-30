@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedZones;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

+ (Class)changedZonesType;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearChangedZones;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)changedZonesCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)changedZonesAtIndex:(unsigned long long)a0;
- (void)addChangedZones:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
