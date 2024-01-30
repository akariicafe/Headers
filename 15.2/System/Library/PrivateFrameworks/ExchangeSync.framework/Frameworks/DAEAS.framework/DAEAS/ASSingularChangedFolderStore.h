@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore

@property (retain, nonatomic) NSString *serverId;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;

@end
