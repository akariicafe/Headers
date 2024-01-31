@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)disambiguationKeypathHasToMany;
- (id)disambiguationKeypath;
- (id)disambiguatingEntity;

@end
