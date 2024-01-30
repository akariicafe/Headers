@class NSSQLEntity, NSMutableArray, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)_generateMulticlauseStringInContext:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)disambiguationKeypath;
- (BOOL)isOrScoped;
- (id)disambiguatingEntity;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)disambiguationKeypathHasToMany;
- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;

@end
