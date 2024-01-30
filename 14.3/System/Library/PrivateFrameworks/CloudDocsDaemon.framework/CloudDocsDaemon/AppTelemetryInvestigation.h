@class NSData, NSString;

@interface AppTelemetryInvestigation : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSData *_zoneName;
    BOOL _sharedZone;
    struct { unsigned char errorCode : 1; unsigned char sharedZone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSData *zoneName;
@property (nonatomic) BOOL hasSharedZone;
@property (nonatomic) BOOL sharedZone;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
