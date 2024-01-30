@class NSData;

@interface NMSMediaSyncServiceDownloadMedia : PBCodable <NSCopying> {
    struct { unsigned char containerType : 1; unsigned char intent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (retain, nonatomic) NSData *dataMultiverseID;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;
@property (nonatomic) BOOL hasIntent;
@property (nonatomic) int intent;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)intentAsString:(int)a0;
- (int)StringAsIntent:(id)a0;
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
