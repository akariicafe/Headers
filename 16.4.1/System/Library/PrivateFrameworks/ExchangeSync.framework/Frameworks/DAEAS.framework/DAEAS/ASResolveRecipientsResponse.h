@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mResponses;
@property (retain, nonatomic) NSArray *responses;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void)addResponse:(id)a0;
- (void).cxx_destruct;

@end
