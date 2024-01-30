@interface AWDNFCMobileSoftwareUpdateExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _status;
    struct { unsigned char timestamp : 1; unsigned char status : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
