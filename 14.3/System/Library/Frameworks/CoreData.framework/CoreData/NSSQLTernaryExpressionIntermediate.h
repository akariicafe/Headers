@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)_generateSQLForPredicate:(id)a0 inContext:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (id)disambiguationKeypath;
- (id)disambiguatingEntity;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)disambiguationKeypathHasToMany;

@end
