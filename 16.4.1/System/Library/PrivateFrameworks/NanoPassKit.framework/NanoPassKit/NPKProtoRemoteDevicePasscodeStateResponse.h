@class NSData;

@interface NPKProtoRemoteDevicePasscodeStateResponse : PBCodable <NSCopying> {
    struct { unsigned char hasPasscodeSet : 1; unsigned char isPasscodeLocked : 1; } _has;
}

@property (nonatomic) BOOL hasHasPasscodeSet;
@property (nonatomic) BOOL hasPasscodeSet;
@property (nonatomic) BOOL hasIsPasscodeLocked;
@property (nonatomic) BOOL isPasscodeLocked;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
