@class CNContactStore, ATXStableContactRepresentationDatabase;

@interface ATXStableContactRepresentationDatastore : NSObject <ATXStableContactRepresentationProviderProtocol> {
    ATXStableContactRepresentationDatabase *_stableContactRepresentationDatabase;
    CNContactStore *_contactStore;
}

- (id)initWithStableContactRepresentationDatabase:(id)a0 contactStore:(id)a1;
- (id)cnContactForCnContactId:(id)a0 rawIdentifier:(id)a1;
- (id)contactInfoDictionaryWithContactId:(id)a0 rawIdentifier:(id)a1;
- (id)refreshCnContactIdsGivenContactEntities:(id)a0;
- (id)initWithStableContactRepresentationDatabase:(id)a0;
- (id)cnContactIdWithStableContactIdentifier:(id)a0;
- (id)stableContactRepresentationForStableContactIdentifier:(id)a0;
- (id)updateAndGetStableContactIdentifier:(id)a0 rawIdentifier:(id)a1;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)init;
- (id)stableContactRepresentationForCnContactId:(id)a0 rawIdentifier:(id)a1;
- (id)stableContactIdentifierWithCnContactId:(id)a0;
- (void).cxx_destruct;

@end
