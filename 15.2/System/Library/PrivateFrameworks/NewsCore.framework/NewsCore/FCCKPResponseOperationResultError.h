@class NSString, FCCKPResponseOperationResultErrorServer, FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension;

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying> {
    FCCKPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorKey;
    FCCKPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer *_serverError;
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
