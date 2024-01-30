@class NSString, HDProfile, HDDatabaseValueCache;

@interface HDOntologyConceptManager : NSObject <HDProfileReadyObserver, HDOntologyImportStatusObserver> {
    HDProfile *_profile;
    HDDatabaseValueCache *_conceptsByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enumerateConceptsMatchingPredicate:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)conceptForCodingCollection:(id)a0 configuration:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)relationshipsForConceptWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)enumerateConceptsMatchingPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;

- (id)initWithProfile:(id)a0;
- (void)unitTesting_clearCache;
- (void)profileDidBecomeReady:(id)a0;
- (void)ontologyDatabaseReferenceOntologyFinishedImport:(id)a0 success:(BOOL)a1 error:(id)a2;
- (id)conceptsForIdentifiers:(id)a0 loadRelationships:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)clearCachedConceptWithIdentifier:(id)a0 transaction:(id)a1;
- (id)conceptForIdentifier:(id)a0 loadRelationships:(BOOL)a1 error:(id *)a2;
- (void)ontologyDatabaseReferenceOntologyWillImport:(id)a0;

@end
