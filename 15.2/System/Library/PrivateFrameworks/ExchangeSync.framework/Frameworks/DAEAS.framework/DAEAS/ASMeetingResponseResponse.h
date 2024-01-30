@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mSingularResponses;
@property (readonly, nonatomic) NSArray *singularResponses;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_addSingularResponse:(id)a0;

@end
