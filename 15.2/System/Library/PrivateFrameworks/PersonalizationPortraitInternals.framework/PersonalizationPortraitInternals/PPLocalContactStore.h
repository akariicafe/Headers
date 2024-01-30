@class PPContactStorage, PPLocalNamedEntityStore;

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {
    PPContactStorage *_contactStorage;
    PPLocalNamedEntityStore *_namedEntityStore;
}

+ (id)defaultStore;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)upcomingRelevantContactsForQuery:(id)a0 error:(id *)a1;
- (id)contactHandlesForTopics:(id)a0 error:(id *)a1;
- (id)contactsWithQuery:(id)a0 error:(id *)a1;
- (id)meCard;
- (id)scoredContactsWithContacts:(id)a0;
- (id)contactsChangeHistoryForClient:(id)a0 error:(id *)a1;
- (id)resolveContactsForNamedEntities:(id)a0;
- (void)clearChangeHistoryForClient:(id)a0 historyResult:(id)a1;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1;
- (id)_incompleteContactFromContactsRecord:(id)a0;
- (id)cachedSignificantContactHandles;
- (void).cxx_destruct;
- (id)contactHandlesForSource:(id)a0 error:(id *)a1;
- (id)rankedContactsWithQuery:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)iterContactNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)initWithStorage:(id)a0 namedEntityStoreOverride:(id)a1;
- (id)contactsWithQuery:(id)a0 explanationSet:(id)a1 timeoutSeconds:(id)a2 error:(id *)a3;
- (double)similarityForNamedEntity:(id)a0 nameRecord:(id)a1;
- (BOOL)chineseBirthdayFound;
- (id)contactNameRecordChangesForClient:(id)a0 error:(id *)a1;
- (id)_scoredContactFromContactsRecord:(id)a0 score:(double)a1;
- (void)rebuildCachedSignificantContactHandlesWithShouldContinue:(id /* block */)a0;

@end
