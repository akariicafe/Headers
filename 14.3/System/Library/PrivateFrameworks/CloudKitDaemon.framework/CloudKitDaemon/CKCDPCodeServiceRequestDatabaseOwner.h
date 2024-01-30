@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying> {
    struct { unsigned char numericValue : 1; } _has;
}

@property (nonatomic) BOOL hasNumericValue;
@property (nonatomic) unsigned long long numericValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;

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
