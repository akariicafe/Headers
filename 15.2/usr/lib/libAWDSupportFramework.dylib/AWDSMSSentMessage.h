@class NSString;

@interface AWDSMSSentMessage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char ctError : 1; unsigned char fzError : 1; unsigned char hasAttachments : 1; unsigned char isGroupMessage : 1; unsigned char isToEmail : 1; unsigned char isToPhoneNumber : 1; unsigned char sendDuration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFzError;
@property (nonatomic) int fzError;
@property (nonatomic) BOOL hasCtError;
@property (nonatomic) int ctError;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (nonatomic) unsigned int isGroupMessage;
@property (nonatomic) BOOL hasIsToPhoneNumber;
@property (nonatomic) unsigned int isToPhoneNumber;
@property (nonatomic) BOOL hasIsToEmail;
@property (nonatomic) unsigned int isToEmail;
@property (nonatomic) BOOL hasHasAttachments;
@property (nonatomic) unsigned int hasAttachments;
@property (nonatomic) BOOL hasSendDuration;
@property (nonatomic) unsigned int sendDuration;

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
