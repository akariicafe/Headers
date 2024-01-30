@class NSString;

@interface AWDIMessageAttachmentDownload : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char attachmentSize : 1; unsigned char connectionType : 1; unsigned char downloadDuration : 1; unsigned char firstLevelMMCSError : 1; unsigned char fourthLevelMMCSError : 1; unsigned char fzError : 1; unsigned char genericError : 1; unsigned char linkQuality : 1; unsigned char messageError : 1; unsigned char secondLevelMMCSError : 1; unsigned char thirdLevelMMCSError : 1; unsigned char tokenError : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFzError;
@property (nonatomic) int fzError;
@property (nonatomic) BOOL hasMessageError;
@property (nonatomic) unsigned int messageError;
@property (nonatomic) BOOL hasTokenError;
@property (nonatomic) unsigned int tokenError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) BOOL hasDownloadDuration;
@property (nonatomic) unsigned int downloadDuration;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasAttachmentSize;
@property (nonatomic) unsigned int attachmentSize;
@property (nonatomic) BOOL hasFirstLevelMMCSError;
@property (nonatomic) int firstLevelMMCSError;
@property (readonly, nonatomic) BOOL hasFirstLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *firstLevelMMCSErrorDomain;
@property (nonatomic) BOOL hasSecondLevelMMCSError;
@property (nonatomic) int secondLevelMMCSError;
@property (readonly, nonatomic) BOOL hasSecondLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *secondLevelMMCSErrorDomain;
@property (nonatomic) BOOL hasThirdLevelMMCSError;
@property (nonatomic) int thirdLevelMMCSError;
@property (readonly, nonatomic) BOOL hasThirdLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *thirdLevelMMCSErrorDomain;
@property (nonatomic) BOOL hasFourthLevelMMCSError;
@property (nonatomic) int fourthLevelMMCSError;
@property (readonly, nonatomic) BOOL hasFourthLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *fourthLevelMMCSErrorDomain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
