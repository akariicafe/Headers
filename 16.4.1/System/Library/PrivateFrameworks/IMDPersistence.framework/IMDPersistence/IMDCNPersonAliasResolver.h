@class CNContactStore, NSMutableDictionary, IMDContactStoreChangeHistoryEventsHandler, NSData;

@interface IMDCNPersonAliasResolver : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSData *currentHistoryToken;
@property (retain, nonatomic) NSMutableDictionary *aliasToCNIDMap;
@property (retain, nonatomic) IMDContactStoreChangeHistoryEventsHandler *contactsEventhandler;

- (id)_predicateForEmailAddress:(id)a0;
- (id)_updateAliasToCNIDMap:(id)a0 withHistoryToken:(id)a1;
- (id)_fetchContactIdentifierForAlias:(id)a0;
- (id)_predicateForAlias:(id)a0;
- (id)_predicateForPhoneNumber:(id)a0;
- (void)CNRecordIDForAliases:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)_batchFetchContactRecordIDForAliases:(id)a0;
- (BOOL)isCNContactFavorited:(id)a0;
- (BOOL)isFavoritedContact:(id)a0;
- (void).cxx_destruct;
- (id)_fetchAliasToCNIDMapForAliases:(id)a0;

@end
