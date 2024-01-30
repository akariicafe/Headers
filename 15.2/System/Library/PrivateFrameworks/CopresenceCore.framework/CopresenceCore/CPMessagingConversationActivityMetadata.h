@class NSString, NSData;

@interface CPMessagingConversationActivityMetadata : PBCodable <NSCopying> {
    struct { unsigned char supportsContinuationOnTV : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFallbackURL;
@property (retain, nonatomic) NSString *fallbackURL;
@property (nonatomic) BOOL hasSupportsContinuationOnTV;
@property (nonatomic) BOOL supportsContinuationOnTV;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSData *image;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
