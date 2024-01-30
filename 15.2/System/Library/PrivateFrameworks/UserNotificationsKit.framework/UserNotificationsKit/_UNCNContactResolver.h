@class CNContactStore, NSArray;

@interface _UNCNContactResolver : NSObject {
    CNContactStore *_contactStore;
    NSArray *_contactStoreSearchKeys;
}

- (void).cxx_destruct;
- (id)init;
- (id)contactForIdentifier:(id)a0;
- (id)resultForContactIdentifier:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 userIdentifier:(id)a3 username:(id)a4 bundleIdentifier:(id)a5;
- (id)confirm:(BOOL)a0 match:(id)a1;
- (id)resultForContactIdentifier:(id)a0;
- (id)bestMatchForPhoneNumber:(id)a0;
- (id)bestMatchForEmailAddress:(id)a0;
- (id)bestMatchForUserIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)bestMatchForUsername:(id)a0 bundleIdentifier:(id)a1;
- (id)_fullnameForCNContact:(id)a0;
- (BOOL)_isSuggestedForContact:(id)a0;
- (id)matchThatMatchesPhoneNumber:(id)a0 forContact:(id)a1;
- (id)bestMatchForPredicate:(id)a0 contactToMatch:(id /* block */)a1;
- (BOOL)_isSuggestedForLabeledValue:(id)a0;
- (id)_matchForContact:(id)a0 matchingLabel:(id)a1 matchType:(unsigned long long)a2;
- (id)_matchThatMatchesEmailAddress:(id)a0 forContact:(id)a1;
- (id)bestMatchForSocialProfile:(id)a0 bundleIdentifier:(id)a1;
- (id)_matchThatMatchesSocialProfile:(id)a0 bundleIdentifier:(id)a1 forContact:(id)a2;

@end
