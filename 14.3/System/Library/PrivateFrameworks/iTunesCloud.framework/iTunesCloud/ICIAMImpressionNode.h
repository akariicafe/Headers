@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasImpressionType;
@property (retain, nonatomic) NSString *impressionType;
@property (readonly, nonatomic) BOOL hasRecoAlgoId;
@property (retain, nonatomic) NSString *recoAlgoId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
