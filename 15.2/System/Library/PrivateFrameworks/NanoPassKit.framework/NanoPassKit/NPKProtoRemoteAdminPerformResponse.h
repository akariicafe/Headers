@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {
    struct { unsigned char httpStatus : 1; } _has;
}

@property (nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) BOOL hasResponseDictionary;
@property (retain, nonatomic) NSData *responseDictionary;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) int httpStatus;

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
