@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)contributorForReference:(id)a0 error:(id *)a1;
- (id)_insertOrLookupContributorEntityForPrimaryUserWithTransaction:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_imPreferredAccount;
- (id)defaultContributorReference;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)_primaryAppleAccount;

@end
