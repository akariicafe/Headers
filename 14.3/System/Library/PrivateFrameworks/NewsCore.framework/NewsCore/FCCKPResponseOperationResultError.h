@class FCCKPResponseOperationResultErrorServer, NSString, FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension;

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientError;
@property (retain, nonatomic) FCCKPResponseOperationResultErrorClient *clientError;
@property (readonly, nonatomic) BOOL hasServerError;
@property (retain, nonatomic) FCCKPResponseOperationResultErrorServer *serverError;
@property (readonly, nonatomic) BOOL hasExtensionError;
@property (retain, nonatomic) FCCKPResponseOperationResultErrorExtension *extensionError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
