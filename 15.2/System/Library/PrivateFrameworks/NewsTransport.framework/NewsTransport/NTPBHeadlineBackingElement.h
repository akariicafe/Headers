@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleRecordData;
@property (retain, nonatomic) NSData *articleRecordData;
@property (readonly, nonatomic) BOOL hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *sourceChannelRecordData;
@property (readonly, nonatomic) BOOL hasMasterIssueRecordData;
@property (retain, nonatomic) NSData *masterIssueRecordData;

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
