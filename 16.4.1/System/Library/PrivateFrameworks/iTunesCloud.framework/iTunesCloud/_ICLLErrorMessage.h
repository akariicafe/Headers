@class NSString;

@interface _ICLLErrorMessage : PBCodable <NSCopying> {
    int _code;
    int _contentTypeCode;
    NSString *_message;
    struct { unsigned char code : 1; unsigned char contentTypeCode : 1; } _has;
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
