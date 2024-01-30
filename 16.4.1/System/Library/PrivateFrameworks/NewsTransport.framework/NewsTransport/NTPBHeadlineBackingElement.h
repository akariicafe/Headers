@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleRecordData;
@property (retain, nonatomic) NSData *articleRecordData;
@property (readonly, nonatomic) BOOL hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *sourceChannelRecordData;
@property (readonly, nonatomic) BOOL hasParentIssueRecordData;
@property (retain, nonatomic) NSData *parentIssueRecordData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
