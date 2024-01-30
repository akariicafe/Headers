@class NSString, NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (retain, nonatomic) NSMutableArray *mRecipients;
@property (readonly, nonatomic) NSArray *recipients;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)addRecipient:(id)a0;

@end
