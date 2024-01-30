@class NSString, NSData;

@interface PBBProtoTinkerAccountCredentialsIngested : PBCodable <NSCopying> {
    struct { unsigned char cdpStatus : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL hasCdpStatus;
@property (nonatomic) unsigned int cdpStatus;
@property (readonly, nonatomic) BOOL hasDetailedError;
@property (retain, nonatomic) NSData *detailedError;

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
