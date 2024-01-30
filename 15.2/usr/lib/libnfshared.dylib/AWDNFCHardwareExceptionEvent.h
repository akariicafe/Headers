@class NSString, NSData;

@interface AWDNFCHardwareExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_exceptionData;
    unsigned int _hardwareType;
    unsigned int _type;
    NSData *_uuidReference;
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char type : 1; } _has;
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
