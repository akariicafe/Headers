@class NSString, NSNumber, NSDictionary;

@interface ASChangedCollectionLeaf : ASItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isResponse;
@property (nonatomic) BOOL validateOpeningTokens;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *serverID;
@property (retain, nonatomic) NSString *instanceID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *parentClientID;
@property (copy, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSDictionary *applicationData;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (long long)dataclass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadClientIDs;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
