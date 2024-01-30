@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (BOOL)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:(id)a0;
- (id)disambiguationKeypath;
- (void)dealloc;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)disambiguatingEntity;

@end
