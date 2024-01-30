@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens>

@property (retain, nonatomic) NSDictionary *parseRules;
@property (retain, nonatomic) NSNumber *foundStatus;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;

- (void).cxx_destruct;
- (void)unknownToken:(int)a0 receivedForCodePage:(int)a1;
- (id)asParseRules;
- (id)initWithCodePage:(int)a0 statusToken:(int)a1;

@end
