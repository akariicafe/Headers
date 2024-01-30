@class NSString;

@interface ASItemOperationsFetchAttachmentProperties : ASItem

@property (retain, nonatomic) NSString *attachmentContentType;
@property (retain, nonatomic) NSString *data;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;

@end
