@interface AWDIDSGenericConnectionSetupDurationEvent : PBCodable <NSCopying> {
    struct { unsigned char connectionSetupDuration : 1; unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char errorCode : 1; unsigned char linkType : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) BOOL hasConnectionSetupDuration;
@property (nonatomic) unsigned long long connectionSetupDuration;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
