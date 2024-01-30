@class NSString;

@interface TRITrialFactorFields : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientFactorPackId;
@property (retain, nonatomic) NSString *clientFactorPackId;
@property (readonly, nonatomic) BOOL hasNamespaceName;
@property (retain, nonatomic) NSString *namespaceName;

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
