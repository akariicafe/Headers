@class HKObserverSet, NSArray, NSDictionary, HDUserDomainConceptProcessingManager, HDProfile, NSMutableArray;
@protocol HDUserDomainConceptObserver;

@interface HDUserDomainConceptManager : NSObject {
    HKObserverSet<HDUserDomainConceptObserver> *_userDomainConceptObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userDomainConceptObserverLock;
    long long _userDomainConceptObserverOpenTransactionsCount;
    NSMutableArray *_pendingUserDomainConceptObserverRecords;
    NSMutableArray *_transactionUserDomainConceptObserverRecords;
}

@property (class, readonly, copy, nonatomic) NSDictionary *userDomainConceptEntitiesByIdentifier;
@property (class, readonly, copy, nonatomic) NSArray *userDomainConceptSubclassEntities;

@property (readonly, nonatomic) HDUserDomainConceptProcessingManager *processingManager;
@property (readonly, weak, nonatomic) HDProfile *profile;

+ (id)keyValueDomainWithProfile:(id)a0;
+ (id)countOfUserDomainConceptsMatchingPredicate:(id)a0 includeDeletedConcepts:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
+ (id)stateFromKeyValueDomain:(id)a0 error:(id *)a1;
+ (id)predicateForListUserDomainConceptWithType:(unsigned long long)a0;
+ (BOOL)storeState:(id)a0 keyValueDomain:(id)a1 error:(id *)a2;
+ (id)predicateForAllPinnedConceptsMappingToRecordsWithUUIDs:(id)a0 pinnedConceptUUIDs:(id)a1;

- (id)initWithProfile:(id)a0;
- (BOOL)deleteUserDomainConcept:(id)a0 error:(id *)a1;
- (id)userDomainConceptAnalyticsWithError:(id *)a0;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 includeDeletedConcepts:(BOOL)a1 limit:(long long)a2 orderingTerms:(id)a3 transaction:(id)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 includeDeletedConcepts:(BOOL)a1 limit:(long long)a2 orderingTerms:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
- (void)notifyObserversForUpdatedUDC:(id)a0 transaction:(id)a1;
- (BOOL)deleteUserDomainConcepts:(id)a0 error:(id *)a1;
- (BOOL)modifyUserDomainConcepts:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncVersion:(struct { int x0; int x1; })a3 error:(id *)a4;
- (BOOL)modifyUserDomainConcepts:(id)a0 method:(long long)a1 error:(id *)a2;
- (BOOL)unitTesting_overrideMaximumPropertyType:(long long)a0 error:(id *)a1;
- (id)unitTesting_fetchProcessingStateWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (id)init;
- (void)removeUserDomainConceptObserver:(id)a0;
- (void)notifyObserversForDeletedUDC:(id)a0 transaction:(id)a1;
- (void)openObserverTransaction;
- (void)addUserDomainConceptObserver:(id)a0 queue:(id)a1;
- (BOOL)updateUserDomainConcept:(id)a0 error:(id *)a1;
- (void)closeObserverTransaction;
- (id)orderingTermsForSortDescriptors:(id)a0 error:(id *)a1;
- (BOOL)unitTesting_overrideStoredAnchor:(long long)a0 error:(id *)a1;
- (void)notifyObserversForAddedUDC:(id)a0 transaction:(id)a1;

@end
