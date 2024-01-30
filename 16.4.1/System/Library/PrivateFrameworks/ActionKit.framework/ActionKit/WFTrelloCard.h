@class NSString, NSURL, NSDate, NSNumber;

@interface WFTrelloCard : WFTrelloObject

@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSNumber *creationPosition;
@property (readonly, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) NSURL *URL;

+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dueDateJSONTransformer;

- (void).cxx_destruct;

@end
