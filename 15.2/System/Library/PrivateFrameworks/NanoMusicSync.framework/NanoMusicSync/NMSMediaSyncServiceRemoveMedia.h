@class NSData;

@interface NMSMediaSyncServiceRemoveMedia : PBCodable <NSCopying> {
    struct { unsigned char targetPersistentID : 1; unsigned char containerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (retain, nonatomic) NSData *dataMultiverseID;
@property (nonatomic) BOOL hasTargetPersistentID;
@property (nonatomic) long long targetPersistentID;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)containerTypeAsString:(int)a0;
- (int)StringAsContainerType:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
