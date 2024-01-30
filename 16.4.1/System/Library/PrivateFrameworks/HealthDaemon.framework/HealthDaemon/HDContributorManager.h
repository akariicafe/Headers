@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithProfile:(id)a0;
- (id)defaultContributorReference;
- (id)contributorForReference:(id)a0 error:(id *)a1;
- (id)_primaryAppleAccount;
- (id)_imPreferredAccount;
- (void).cxx_destruct;

@end
