@class NSData;

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_aid;
    unsigned int _method;
    unsigned int _status;
    NSData *_uuidReference;
    BOOL _activated;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char method : 1; unsigned char status : 1; unsigned char activated : 1; } _has;
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
