@class NSData;

@interface CKCodeRecordTransport : PBCodable <NSCopying> {
    struct { unsigned char contents : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocalSerialization;
@property (retain, nonatomic) NSData *localSerialization;
@property (readonly, nonatomic) BOOL hasWireSerialization;
@property (retain, nonatomic) NSData *wireSerialization;
@property (nonatomic) BOOL hasContents;
@property (nonatomic) int contents;
@property (readonly, nonatomic) BOOL hasEncryptedMasterKey;
@property (retain, nonatomic) NSData *encryptedMasterKey;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsContents:(id)a0;
- (id)contentsAsString:(int)a0;
- (void)clearOneofValuesForContents;

@end
