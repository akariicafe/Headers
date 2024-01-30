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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
