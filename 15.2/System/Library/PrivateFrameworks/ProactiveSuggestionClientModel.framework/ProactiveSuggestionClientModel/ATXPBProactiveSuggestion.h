@class NSString, ATXPBProactiveSuggestionUISpecification, ATXPBProactiveSuggestionScoreSpecification, ATXPBProactiveSuggestionClientModelSpecification, ATXPBProactiveSuggestionExecutableSpecification;

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL hasClientModelSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionClientModelSpecification *clientModelSpecification;
@property (readonly, nonatomic) BOOL hasExecutableSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionExecutableSpecification *executableSpecification;
@property (readonly, nonatomic) BOOL hasUiSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionUISpecification *uiSpecification;
@property (readonly, nonatomic) BOOL hasScoreSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification;

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
