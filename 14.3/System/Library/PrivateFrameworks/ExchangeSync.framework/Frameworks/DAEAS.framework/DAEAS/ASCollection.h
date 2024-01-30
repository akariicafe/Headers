@class NSString, NSArray, NSNumber, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {
    long long _dataclass;
    NSString *_syncKey;
    NSString *_collectionId;
    NSNumber *_status;
    NSNumber *_moreAvailable;
    NSArray *_changedItems;
    NSArray *_responseItems;
    ASFolderItemsSyncResponse *_parentResponse;
    int _sniffableType;
    BOOL _checkedShouldSniffInvites;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void)setSyncKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)moreAvailable;
- (id)changedItems;
- (long long)dataclass;
- (id)syncKey;
- (id)collectionId;
- (void)setCollectionId:(id)a0;
- (id)description;
- (id)status;
- (id)responseItems;
- (void)setMoreAvailable:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)setResponseItems:(id)a0;
- (void)setDataclassString:(id)a0;
- (void)setChangedItems:(id)a0;
- (void)setParentResponse:(id)a0;
- (int)sniffableTypeForAccount:(id)a0;

@end
