@class NSData;

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSData *_log;
    NSData *_uuidReference;
    BOOL _contactless;
    struct { unsigned char timestamp : 1; unsigned char contactless : 1; } _has;
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
