@class NSData, NSString;

@interface PETRawMessage : PBCodable <NSCopying> {
    struct { unsigned char typeId : 1; } _has;
}

@property (nonatomic) BOOL hasTypeId;
@property (nonatomic) unsigned int typeId;
@property (readonly, nonatomic) BOOL hasRawBytes;
@property (retain, nonatomic) NSData *rawBytes;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
