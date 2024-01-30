@interface AWDMailError : PBCodable <NSCopying> {
    struct { unsigned char genericErrorCode : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasGenericErrorCode;
@property (nonatomic) long long genericErrorCode;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)errorCodeAsString:(int)a0;
- (int)StringAsErrorCode:(id)a0;

@end
