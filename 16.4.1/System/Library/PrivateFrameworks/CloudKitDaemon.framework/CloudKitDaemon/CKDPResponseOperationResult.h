@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) CKDPResponseOperationResultError *error;

- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCode:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)codeAsString:(int)a0;

@end
