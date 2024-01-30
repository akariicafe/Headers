@class NSString;

@interface AWDIMessageNicknameRetrieved : PBCodable <NSCopying> {
    struct { unsigned char timeTaken : 1; unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char hasAvatar : 1; unsigned char linkQuality : 1; unsigned char publicOperationalErrorCode : 1; unsigned char publicSuccess : 1; unsigned char updated : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTimeTaken;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) BOOL hasUpdated;
@property (nonatomic) unsigned int updated;
@property (nonatomic) BOOL hasHasAvatar;
@property (nonatomic) unsigned int hasAvatar;
@property (nonatomic) BOOL hasPublicSuccess;
@property (nonatomic) unsigned int publicSuccess;
@property (readonly, nonatomic) BOOL hasPublicOperationalErrorDomain;
@property (retain, nonatomic) NSString *publicOperationalErrorDomain;
@property (nonatomic) BOOL hasPublicOperationalErrorCode;
@property (nonatomic) unsigned int publicOperationalErrorCode;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
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
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
