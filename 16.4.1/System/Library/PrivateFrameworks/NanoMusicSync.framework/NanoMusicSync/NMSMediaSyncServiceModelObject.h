@class NSData;

@interface NMSMediaSyncServiceModelObject : PBCodable <NSCopying> {
    struct { unsigned char containerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (retain, nonatomic) NSData *dataMultiverseID;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsContainerType:(id)a0;
- (id)containerTypeAsString:(int)a0;

@end
