@class NSString, NSData;

@interface NTPBArticleSessionResign : PBCodable <NSCopying> {
    struct { unsigned char publisherArticleVersion : 1; unsigned char articleType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) int articleType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) long long publisherArticleVersion;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)articleTypeAsString:(int)a0;
- (int)StringAsArticleType:(id)a0;

@end
