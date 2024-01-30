@class NSSQLEntity, NSMutableArray, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (BOOL)disambiguationKeypathHasToMany;
- (BOOL)isOrScoped;
- (id)generateSQLStringInContext:(id)a0;
- (id)disambiguationKeypath;
- (void)dealloc;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)disambiguatingEntity;

@end
