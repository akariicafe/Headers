@class NSString;

@interface BMPBUserActivityMetadataTopic : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicIdentifier;
@property (retain, nonatomic) NSString *topicIdentifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
