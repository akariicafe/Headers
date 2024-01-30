@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying> {
    struct { unsigned char coverArticleWidgetArticleCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoverArticleWidgetViewingSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetViewingSessionId;
@property (nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;

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
