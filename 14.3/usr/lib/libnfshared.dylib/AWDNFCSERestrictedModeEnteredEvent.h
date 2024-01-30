@class NSData, NSString;

@interface AWDNFCSERestrictedModeEnteredEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char contactless : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasContactless;
@property (nonatomic) BOOL contactless;
@property (readonly, nonatomic) BOOL hasRestrictedModeUUID;
@property (retain, nonatomic) NSData *restrictedModeUUID;
@property (readonly, nonatomic) BOOL hasPlatformIdentifier;
@property (retain, nonatomic) NSString *platformIdentifier;
@property (readonly, nonatomic) BOOL hasAttackLog;
@property (retain, nonatomic) NSData *attackLog;
@property (nonatomic) BOOL hasHardwareType;
@property (nonatomic) unsigned int hardwareType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
