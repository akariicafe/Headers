@class HKAuthorizationStore, NSArray, NSSet, NSMutableSet, NSDictionary, HKHealthStore, HKSource;
@protocol HKSourceAuthorizationControllerDelegate;

@interface HKSourceAuthorizationController : NSObject {
    HKAuthorizationStore *_authorizationStore;
}

@property (retain, nonatomic) NSArray *orderedTypesForSharing;
@property (retain, nonatomic) NSArray *orderedTypesForReading;
@property (retain, nonatomic) NSMutableSet *typesEnabledForSharing;
@property (retain, nonatomic) NSMutableSet *typesEnabledForReading;
@property (retain, nonatomic) NSSet *requestedTypesForSharing;
@property (retain, nonatomic) NSSet *requestedTypesForReading;
@property (retain, nonatomic) NSDictionary *requestedDocumentAuths;
@property (nonatomic) BOOL isUpdatingAllTypes;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKSource *source;
@property (weak, nonatomic) id<HKSourceAuthorizationControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL anyTypeRequested;

- (void)reload;
- (void).cxx_destruct;
- (void)_reloadTypeAuthorizationRecords;
- (id)typesInSection:(long long)a0;
- (BOOL)allTypesEnabled;
- (long long)_authorizationStatusWithType:(id)a0;
- (id)_enabledSubTypesForType:(id)a0 inSection:(long long)a1;
- (id)_enabledTypesInSection:(long long)a0;
- (BOOL)_parentTypeDisabledForType:(id)a0 inSection:(long long)a1;
- (void)_reloadDocumentAuthorizationRecords;
- (void)_setAuthorizationStatuses:(id)a0;
- (id)_sortedTypes:(id)a0;
- (void)_updateAuthorizationStatusWithTypes:(id)a0;
- (BOOL)allTypesEnabledInSection:(long long)a0;
- (BOOL)anyTypeEnabled;
- (void)commitAuthorizationStatuses;
- (void)commitObjectAuthorizationStatuses:(id)a0;
- (unsigned long long)countOfTypesInSection:(long long)a0;
- (id)initWithHealthStore:(id)a0 source:(id)a1 typesForSharing:(id)a2 typesForReading:(id)a3;
- (BOOL)isRequestingDocumentAuthorization;
- (BOOL)isTypeEnabled:(id)a0 inSection:(long long)a1;
- (id)objectAuthorizationStatusesForDocuments;
- (void)resetObjectAuthorizationStatuses;
- (void)setEnabled:(BOOL)a0 forAllTypesInSection:(long long)a1 commit:(BOOL)a2;
- (void)setEnabled:(BOOL)a0 forType:(id)a1 inSection:(long long)a2 commit:(BOOL)a3;

@end
