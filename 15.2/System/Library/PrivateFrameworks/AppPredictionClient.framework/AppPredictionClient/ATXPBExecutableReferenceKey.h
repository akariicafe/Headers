@class NSString, ATXPBHeroAppPrediction, ATXPBInfoSuggestion, NSMutableArray, ATXPBAction;

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying>

@property (nonatomic) int executableType;
@property (readonly, nonatomic) BOOL hasExecutableString;
@property (retain, nonatomic) NSString *executableString;
@property (readonly, nonatomic) BOOL hasExecutableAction;
@property (retain, nonatomic) ATXPBAction *executableAction;
@property (readonly, nonatomic) BOOL hasExecutableHeroApp;
@property (retain, nonatomic) ATXPBHeroAppPrediction *executableHeroApp;
@property (retain, nonatomic) NSMutableArray *references;
@property (readonly, nonatomic) BOOL hasExecutableInfoSuggestion;
@property (retain, nonatomic) ATXPBInfoSuggestion *executableInfoSuggestion;

+ (Class)referencesType;

- (void)clearReferences;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)referencesCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)StringAsExecutableType:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)referencesAtIndex:(unsigned long long)a0;
- (void)addReferences:(id)a0;
- (id)executableTypeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
