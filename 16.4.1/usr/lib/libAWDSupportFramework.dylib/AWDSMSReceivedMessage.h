@class NSString;

@interface AWDSMSReceivedMessage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char ctError : 1; unsigned char fzError : 1; unsigned char hasAttachments : 1; unsigned char isFromEmail : 1; unsigned char isFromPhoneNumber : 1; unsigned char isGroupMessage : 1; } _has;
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
@property (nonatomic) BOOL hasIsFromPhoneNumber;
@property (nonatomic) unsigned int isFromPhoneNumber;
@property (nonatomic) BOOL hasIsFromEmail;
@property (nonatomic) unsigned int isFromEmail;
@property (nonatomic) BOOL hasHasAttachments;
@property (nonatomic) unsigned int hasAttachments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
