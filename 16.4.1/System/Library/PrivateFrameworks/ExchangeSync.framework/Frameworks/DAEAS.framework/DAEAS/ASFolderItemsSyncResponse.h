@class ASCollection, NSMutableArray, NSNumber;

@interface ASFolderItemsSyncResponse : ASItem

@property (retain, nonatomic) ASCollection *collection;
@property (retain, nonatomic) NSMutableArray *meetingRequestDatas;
@property (retain, nonatomic) NSMutableArray *deliveryIdsToClear;
@property (retain, nonatomic) NSMutableArray *deliveryIdsToSoftClear;
@property (nonatomic) long long dataclass;
@property (retain, nonatomic) NSNumber *status;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)setCollections:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_processMeetingRequestDatasForAccount:(id)a0;
- (void)addDeliveryIdToClear:(id)a0;
- (void)addDeliveryIdToSoftClear:(id)a0;
- (void)addMeetingRequestData:(id)a0;
- (id)initWithDataclass:(long long)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
