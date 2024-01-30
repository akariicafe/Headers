@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore

@property (retain, nonatomic) NSString *serverId;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;

@end
