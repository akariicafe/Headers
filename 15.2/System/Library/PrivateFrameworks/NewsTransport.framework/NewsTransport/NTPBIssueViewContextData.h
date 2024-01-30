@interface NTPBIssueViewContextData : PBCodable <NSCopying> {
    struct { unsigned char issueViewContext : 1; } _has;
}

@property (nonatomic) BOOL hasIssueViewContext;
@property (nonatomic) int issueViewContext;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
