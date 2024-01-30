@class NSString, NSArray, NSNumber, NSMutableArray;

@interface ASSettingsTaskOofGetResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mOofMessages;
@property (retain, nonatomic) NSNumber *oofState;
@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSArray *oofMessages;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)addOofMessages:(id)a0;
- (id)convertToDAOofParams;

@end
