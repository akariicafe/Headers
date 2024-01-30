@class NSString;

@interface PBBProtoAcknowledgeBuysOnWatchCredentialIngestion : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;

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
