@interface ASCodableCloudKitRelationshipEvent : PBCodable <NSCopying> {
    struct { unsigned char anchor : 1; unsigned char date : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) long long anchor;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

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
