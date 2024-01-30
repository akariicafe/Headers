@class PPContactStorage;

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {
    PPContactStorage *_contactStorage;
}

+ (id)defaultStore;

- (id)initWithStorage:(id)a0;
- (id)contactsWithQuery:(id)a0 error:(id *)a1;
- (id)init;
- (id)rankedContactsWithQuery:(id)a0 error:(id *)a1;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)contactHandlesForTopics:(id)a0 error:(id *)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)contactsChangeHistoryForClient:(id)a0 error:(id *)a1;
- (id)scoredContactsWithContacts:(id)a0;
- (BOOL)iterContactNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)chineseBirthdayFound;
- (id)contactHandlesForSource:(id)a0 error:(id *)a1;
- (id)contactNameRecordChangesForClient:(id)a0 error:(id *)a1;
- (id)contactsWithQuery:(id)a0 explanationSet:(id)a1 timeoutSeconds:(id)a2 error:(id *)a3;
- (id)meCard;
- (void)clearChangeHistoryForClient:(id)a0 historyResult:(id)a1;

@end
