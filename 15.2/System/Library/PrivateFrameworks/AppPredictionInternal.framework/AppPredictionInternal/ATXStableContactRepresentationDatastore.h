@class CNContactStore, ATXStableContactRepresentationDatabase;

@interface ATXStableContactRepresentationDatastore : NSObject <ATXStableContactRepresentationProviderProtocol> {
    ATXStableContactRepresentationDatabase *_stableContactRepresentationDatabase;
    CNContactStore *_contactStore;
}

- (id)updateAndGetStableContactIdentifier:(id)a0 rawIdentifier:(id)a1;
- (id)refreshCnContactIdsGivenContactEntities:(id)a0;
- (id)initWithStableContactRepresentationDatabase:(id)a0 contactStore:(id)a1;
- (void).cxx_destruct;
- (id)cnContactIdWithStableContactIdentifier:(id)a0;
- (id)init;
- (id)stableContactIdentifierWithCnContactId:(id)a0;
- (id)cnContactForCnContactId:(id)a0 rawIdentifier:(id)a1;
- (id)contactInfoDictionaryWithContactId:(id)a0 rawIdentifier:(id)a1;
- (id)stableContactRepresentationForCnContactId:(id)a0 rawIdentifier:(id)a1;
- (id)stableContactRepresentationForStableContactIdentifier:(id)a0;
- (id)initWithStableContactRepresentationDatabase:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;

@end
