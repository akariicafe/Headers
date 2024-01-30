@class NSString, NSMutableDictionary;

@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>

@property (retain, nonatomic) NSMutableDictionary *aliasToCNIDMap;
@property (retain, nonatomic) NSMutableDictionary *CNIDToAliasesMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitDropEverythingEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (id)generateCNIDToAliasesMapFrom:(id)a0;
- (void)handleAddOrUpdateEventForCNContact:(id)a0;
- (id)matchAliasesFromCacheForCNContact:(id)a0;
- (void)removeAliasFromCNIDToAliasesMap:(id)a0 withCNID:(id)a1;
- (void)addAliasToCNIDToAliasMap:(id)a0 withCNID:(id)a1;
- (id)initWithAliasToCNIDMap:(id)a0;
- (id)getAliasToCNIDMap;
- (id)getCNIDToAliasesMap;
- (void)visitAddContactEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void).cxx_destruct;

@end
