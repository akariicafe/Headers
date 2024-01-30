@class NSMutableDictionary;
@protocol CPLTransportScopeTranslator;

@interface CPLTransportScopeMapping : NSObject {
    NSMutableDictionary *_mapping;
    NSMutableDictionary *_sharedScopeIdentifierMapping;
}

@property (readonly, nonatomic) id<CPLTransportScopeTranslator> translator;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL hasStagingScopes;

- (id)redactedDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTranslator:(id)a0;
- (BOOL)_addAllTransportScopesForScope:(id)a0 scopes:(id)a1 allowsTentativeTransportScope:(BOOL)a2 useStagingScopeIfNecessary:(BOOL)a3 error:(id *)a4;
- (BOOL)_addTransportScopeForScope:(id)a0 scopes:(id)a1 allowsTentativeTransportScope:(BOOL)a2 useStagingScopeIfNecessary:(BOOL)a3 error:(id *)a4;
- (BOOL)_checkTransportScopeForScopeIdentifier:(id)a0 hasConcreteScope:(BOOL *)a1 error:(id *)a2;
- (void)addConcreteScope:(id)a0 forScopeWithIdentifier:(id)a1;
- (void)addTransportScope:(id)a0 forScopeWithIdentifier:(id)a1;
- (BOOL)addTransportScopeForScope:(id)a0 scopes:(id)a1 allowsTentativeTransportScope:(BOOL)a2 useStagingScopeIfNecessary:(BOOL)a3 error:(id *)a4;
- (BOOL)addTransportScopeForScopeIdentifier:(id)a0 scopes:(id)a1 useStagingScopeIfNecessary:(BOOL)a2 error:(id *)a3;
- (id)concreteScopeForScopeWithIdentifier:(id)a0;
- (void)enumerateConcreteScopesWithBlock:(id /* block */)a0;
- (BOOL)hasConcreteScopeForScopeWithIdentifier:(id)a0;
- (void)setSharedScopeIdentifier:(id)a0 forScopeWithIdentifier:(id)a1;
- (id)sharedScopeIdentifierForScopeWithIdentifier:(id)a0;
- (BOOL)shouldSetSharedScopeIdentifierForScopeWithIdentifier:(id)a0;
- (void)updateWithTransportScopeMapping:(id)a0;

@end
