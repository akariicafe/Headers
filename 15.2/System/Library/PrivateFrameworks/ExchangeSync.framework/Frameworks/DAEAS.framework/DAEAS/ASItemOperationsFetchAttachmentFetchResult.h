@class NSNumber, NSString, ASItemOperationsFetchAttachmentProperties;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *fileReference;
@property (retain, nonatomic) ASItemOperationsFetchAttachmentProperties *properties;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;

@end
