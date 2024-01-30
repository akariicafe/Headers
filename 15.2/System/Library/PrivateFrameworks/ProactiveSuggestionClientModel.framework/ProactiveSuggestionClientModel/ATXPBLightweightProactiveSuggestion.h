@class NSString;

@interface ATXPBLightweightProactiveSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExecutableIdentifier;
@property (retain, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;

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
