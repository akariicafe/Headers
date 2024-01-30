@class NSData, NSString;

@interface AWDNFCSERestrictedModeEnteredEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSData *_attackLog;
    unsigned int _hardwareType;
    NSString *_platformIdentifier;
    NSData *_restrictedModeUUID;
    BOOL _contactless;
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char contactless : 1; } _has;
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
