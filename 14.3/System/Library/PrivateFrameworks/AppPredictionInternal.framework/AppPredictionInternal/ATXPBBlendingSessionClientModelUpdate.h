@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionClientModelUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionType;

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
- (void)clearSuggestions;
- (unsigned long long)suggestionsCount;
- (id)suggestionAtIndex:(unsigned long long)a0;
- (void)addSuggestion:(id)a0;

@end
