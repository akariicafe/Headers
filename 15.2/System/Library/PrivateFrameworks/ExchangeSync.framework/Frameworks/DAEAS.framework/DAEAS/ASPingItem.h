@class NSArray, NSNumber;

@interface ASPingItem : ASItem

@property (retain, nonatomic) NSArray *folders;
@property (retain, nonatomic) NSNumber *heartBeatInterval;
@property (retain, nonatomic) NSNumber *maxFolders;
@property (retain, nonatomic) NSNumber *status;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;

@end
