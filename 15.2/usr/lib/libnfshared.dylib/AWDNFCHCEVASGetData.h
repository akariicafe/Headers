@class NSData, NSString;

@interface AWDNFCHCEVASGetData : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _filterType;
    unsigned int _filterValue;
    NSData *_merchantID;
    NSString *_merchantURL;
    unsigned int _signupOnly;
    unsigned int _swStatus;
    unsigned int _terminalCapabilities;
    NSData *_uuidReference;
    unsigned int _version;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char filterType : 1; unsigned char filterValue : 1; unsigned char signupOnly : 1; unsigned char swStatus : 1; unsigned char terminalCapabilities : 1; unsigned char version : 1; } _has;
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
