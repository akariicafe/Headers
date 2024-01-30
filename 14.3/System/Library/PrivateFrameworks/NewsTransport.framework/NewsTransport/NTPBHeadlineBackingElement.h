@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleRecordData;
@property (retain, nonatomic) NSData *articleRecordData;
@property (readonly, nonatomic) BOOL hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *sourceChannelRecordData;
@property (readonly, nonatomic) BOOL hasMasterIssueRecordData;
@property (retain, nonatomic) NSData *masterIssueRecordData;

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
