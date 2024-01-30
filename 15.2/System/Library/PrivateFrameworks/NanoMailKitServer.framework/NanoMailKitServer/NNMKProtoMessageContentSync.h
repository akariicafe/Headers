@class NSString, NSData, NNMKProtoMessage, NSMutableArray;

@interface NNMKProtoMessageContentSync : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mainAlternativeValid : 1; unsigned char partiallyLoaded : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) BOOL hasMainAlternativeValid;
@property (nonatomic) BOOL mainAlternativeValid;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSData *text;
@property (readonly, nonatomic) BOOL hasPreview;
@property (retain, nonatomic) NSData *preview;
@property (nonatomic) BOOL hasPartiallyLoaded;
@property (nonatomic) BOOL partiallyLoaded;
@property (retain, nonatomic) NSMutableArray *attachments;
@property (readonly, nonatomic) BOOL hasNotificationMessage;
@property (retain, nonatomic) NNMKProtoMessage *notificationMessage;
@property (readonly, nonatomic) BOOL hasHtmlContentData;
@property (retain, nonatomic) NSData *htmlContentData;

+ (Class)attachmentType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAttachment:(id)a0;
- (unsigned long long)attachmentsCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearAttachments;
- (id)attachmentAtIndex:(unsigned long long)a0;

@end
