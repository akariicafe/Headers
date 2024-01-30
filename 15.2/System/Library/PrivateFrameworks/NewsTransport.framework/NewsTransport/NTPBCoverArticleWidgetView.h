@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying> {
    struct { unsigned char coverArticleWidgetArticleCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoverArticleWidgetViewingSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetViewingSessionId;
@property (nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;

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
