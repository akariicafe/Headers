@class HKObserverSet, HDProfile, HDUserDomainConceptProcessingManager, NSMutableArray;
@protocol HDUserDomainConceptObserver;

@interface HDUserDomainConceptManager : NSObject {
    HKObserverSet<HDUserDomainConceptObserver> *_userDomainConceptObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userDomainConceptObserverLock;
    long long _userDomainConceptObserverOpenTransactionsCount;
    NSMutableArray *_pendingUserDomainConceptObserverRecords;
    NSMutableArray *_transactionUserDomainConceptObserverRecords;
}

@property (readonly, nonatomic) HDUserDomainConceptProcessingManager *processingManager;
@property (readonly, weak, nonatomic) HDProfile *profile;

+ (id)countOfUserDomainConceptsMatchingPredicate:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)predicateForElementsOfListType:(unsigned long long)a0;
+ (id)predicateForListUserDomainConceptWithType:(unsigned long long)a0;
+ (id)predicateForAllPinnedConceptsMappingToRecordsWithUUIDs:(id)a0 pinnedConceptUUIDs:(id)a1;

- (BOOL)updateUserDomainConcept:(id)a0 error:(id *)a1;
- (id)orderingTermsForSortDescriptors:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0;
- (BOOL)deleteUserDomainConcepts:(id)a0 error:(id *)a1;
- (BOOL)modifyUserDomainConcepts:(id)a0 method:(long long)a1 error:(id *)a2;
- (void)closeObserverTransaction;
- (BOOL)updateUserDomainConcepts:(id)a0 error:(id *)a1;
- (void)notifyObserversForUpdatedUDC:(id)a0 transaction:(id)a1;
- (void)notifyObserversForAddedUDC:(id)a0 transaction:(id)a1;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (id)keyValueDomain;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 enumerationOptions:(unsigned long long)a1 limit:(long long)a2 orderingTerms:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
- (void)notifyObserversForDeletedUDC:(id)a0 transaction:(id)a1;
- (id)init;
- (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 enumerationOptions:(unsigned long long)a1 limit:(long long)a2 orderingTerms:(id)a3 transaction:(id)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
- (void)addUserDomainConceptObserver:(id)a0 queue:(id)a1;
- (BOOL)modifyUserDomainConcepts:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncIdentity:(long long)a3 syncVersion:(struct { int x0; int x1; })a4 error:(id *)a5;
- (void)removeUserDomainConceptObserver:(id)a0;
- (BOOL)deleteUserDomainConcept:(id)a0 error:(id *)a1;
- (id)userDomainConceptAnalyticsWithError:(id *)a0;
- (void).cxx_destruct;
- (void)openObserverTransaction;

@end
