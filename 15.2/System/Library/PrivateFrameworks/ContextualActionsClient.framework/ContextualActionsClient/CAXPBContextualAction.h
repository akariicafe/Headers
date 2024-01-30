@class NSString, NSMutableArray;

@interface CAXPBContextualAction : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (Class)parametersType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addParameters:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (id)parametersAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
