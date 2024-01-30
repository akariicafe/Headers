@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {
    struct { unsigned char httpStatus : 1; } _has;
}

@property (nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) BOOL hasResponseDictionary;
@property (retain, nonatomic) NSData *responseDictionary;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) int httpStatus;

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
