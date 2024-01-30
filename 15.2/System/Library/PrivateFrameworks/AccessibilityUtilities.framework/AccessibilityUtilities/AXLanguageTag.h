@class NSString, AXDialectMap, NSMutableOrderedSet;

@interface AXLanguageTag : NSObject <NSCopying>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (weak, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableOrderedSet *unambiguousDialects;
@property (retain, nonatomic) NSMutableOrderedSet *ambiguousDialects;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects;
@property (readonly, weak, nonatomic) AXDialectMap *preferredAmbiguousDialect;
@property (readonly, weak, nonatomic) AXDialectMap *preferredUnambiguousDialect;
@property (readonly, weak, nonatomic) NSString *contentSubstring;
@property (readonly, weak, nonatomic) AXDialectMap *dialect;
@property (nonatomic) BOOL wasPredicted;
@property (nonatomic) BOOL createdFromNewline;

+ (id)tagWithDialects:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 content:(id)a2 predictedByTagger:(BOOL)a3;

- (void)addAmbiguousDialect:(id)a0;
- (void)addUnambiguousDialect:(id)a0;
- (BOOL)canBeSpokenByDialect:(id)a0;
- (BOOL)hasAmbigiousDialects;
- (void)addAmbiguousDialects:(id)a0;
- (void)addPredictedSecondaryDialects:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeSpokenByLanguage:(id)a0;

@end
