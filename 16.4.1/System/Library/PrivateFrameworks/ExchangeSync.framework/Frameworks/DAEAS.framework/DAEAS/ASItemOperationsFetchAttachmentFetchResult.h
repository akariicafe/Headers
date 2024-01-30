@class NSNumber, NSString, ASItemOperationsFetchAttachmentProperties;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *fileReference;
@property (retain, nonatomic) ASItemOperationsFetchAttachmentProperties *properties;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;

@end
