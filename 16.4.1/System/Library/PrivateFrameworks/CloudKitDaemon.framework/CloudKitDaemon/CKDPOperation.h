@class NSString, NSData, CKDPIdentifier;

@interface CKDPOperation : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char last : 1; unsigned char synchronousMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationUUID;
@property (retain, nonatomic) NSString *operationUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasSynchronousMode;
@property (nonatomic) BOOL synchronousMode;
@property (nonatomic) BOOL hasLast;
@property (nonatomic) BOOL last;
@property (readonly, nonatomic) BOOL hasRequestSignature;
@property (retain, nonatomic) NSData *requestSignature;
@property (readonly, nonatomic) BOOL hasAnonymousCKUserID;
@property (retain, nonatomic) CKDPIdentifier *anonymousCKUserID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)_typeCKLogValue;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
