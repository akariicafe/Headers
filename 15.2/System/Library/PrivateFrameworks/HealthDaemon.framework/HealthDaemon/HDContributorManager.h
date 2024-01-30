@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)_primaryAppleAccount;
- (id)initWithProfile:(id)a0;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)defaultContributorReference;
- (void).cxx_destruct;
- (id)_imPreferredAccount;
- (id)contributorForReference:(id)a0 error:(id *)a1;

@end
