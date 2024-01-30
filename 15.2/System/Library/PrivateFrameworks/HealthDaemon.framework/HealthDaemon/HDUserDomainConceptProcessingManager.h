@class NSString, HDProfile;

@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _batchSize;
    BOOL _hasScheduledProcessing;
}

@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers;
@property (copy, nonatomic) id /* block */ unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)ontologyDatabase:(id)a0 didBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (void).cxx_destruct;
- (id)init;
- (void)unitTesting_overrideDefaultBatchSize:(long long)a0;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;

@end
