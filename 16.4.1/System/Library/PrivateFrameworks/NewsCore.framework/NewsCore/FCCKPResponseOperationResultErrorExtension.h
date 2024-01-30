@class NSString, NSData;

@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
    struct { unsigned char typeCode : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
