@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying> {
    struct { unsigned char maxScrollDepth : 1; } _has;
}

@property (nonatomic) BOOL hasMaxScrollDepth;
@property (nonatomic) float maxScrollDepth;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasWindowId;
@property (retain, nonatomic) NSString *windowId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
