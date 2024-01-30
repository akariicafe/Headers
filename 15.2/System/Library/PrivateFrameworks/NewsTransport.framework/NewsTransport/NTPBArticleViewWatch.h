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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
