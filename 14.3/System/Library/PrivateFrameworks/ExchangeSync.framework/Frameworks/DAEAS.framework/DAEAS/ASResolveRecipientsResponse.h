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

- (void).cxx_destruct;
- (id)description;
- (void)addResponse:(id)a0;

@end
