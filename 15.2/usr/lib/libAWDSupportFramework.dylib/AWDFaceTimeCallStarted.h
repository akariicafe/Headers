@class NSString;

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char isCallUpgrade : 1; unsigned char isToEmail : 1; unsigned char isToPhoneNumber : 1; unsigned char isVideo : 1; unsigned char onLockScreen : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsToPhoneNumber;
@property (nonatomic) unsigned int isToPhoneNumber;
@property (nonatomic) BOOL hasIsToEmail;
@property (nonatomic) unsigned int isToEmail;
@property (nonatomic) BOOL hasIsCallUpgrade;
@property (nonatomic) unsigned int isCallUpgrade;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) BOOL hasOnLockScreen;
@property (nonatomic) unsigned int onLockScreen;

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
