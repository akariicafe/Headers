@class NSData, ASCodableCloudKitCompetition;

@interface ASCodableDatabaseCompetition : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasCompetition;
@property (retain, nonatomic) ASCodableCloudKitCompetition *competition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
