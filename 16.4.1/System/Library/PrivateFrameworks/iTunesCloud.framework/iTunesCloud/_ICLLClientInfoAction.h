@interface _ICLLClientInfoAction : PBCodable <NSCopying> {
    long long _participantId;
    int _code;
    struct { unsigned char participantId : 1; unsigned char code : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
