@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mResponses;
@property (retain, nonatomic) NSArray *responses;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void)addResponse:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
