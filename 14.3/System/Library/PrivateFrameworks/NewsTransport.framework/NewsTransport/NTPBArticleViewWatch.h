@class NSString;

@interface NTPBArticleViewWatch : PBCodable <NSCopying> {
    struct { unsigned char articleHostViewTypeWatch : 1; unsigned char didScroll : 1; } _has;
}

@property (nonatomic) BOOL hasArticleHostViewTypeWatch;
@property (nonatomic) int articleHostViewTypeWatch;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionIdWatch;
@property (retain, nonatomic) NSString *articleViewingSessionIdWatch;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasDidScroll;
@property (nonatomic) BOOL didScroll;

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
