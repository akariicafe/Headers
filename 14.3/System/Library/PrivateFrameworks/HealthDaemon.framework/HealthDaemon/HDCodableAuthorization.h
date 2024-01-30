@interface HDCodableAuthorization : PBCodable <NSCopying> {
    struct { unsigned char authorizationMode : 1; unsigned char authorizationRequest : 1; unsigned char authorizationStatus : 1; unsigned char modificationDate : 1; unsigned char modificationEpoch : 1; unsigned char objectType : 1; } _has;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) BOOL hasAuthorizationRequest;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasModificationEpoch;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) BOOL hasAuthorizationMode;
@property (nonatomic) long long authorizationMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (long long)_authorizationStatus;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (long long)_dataTypeCode;
- (id)_modificationDate;
- (long long)_authorizationRequest;
- (long long)_authorizationMode;
- (void)_setModificationDate:(id)a0;
- (void)_setDataTypeCodeWithObjectType:(id)a0;
- (void)_setAuthorizationStatusWithNumber:(id)a0;
- (void)_setAuthorizationRequestWithNumber:(id)a0;
- (void)_setAuthorizationModeWithNumber:(id)a0;

@end
