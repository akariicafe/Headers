@class CKDPZoneCapabilities, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; unsigned char deleteType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic) BOOL hasDeleteType;
@property (nonatomic) int deleteType;
@property (readonly, nonatomic) BOOL hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)changeTypeAsString:(int)a0;
- (id)deleteTypeAsString:(int)a0;
- (int)StringAsDeleteType:(id)a0;

@end
