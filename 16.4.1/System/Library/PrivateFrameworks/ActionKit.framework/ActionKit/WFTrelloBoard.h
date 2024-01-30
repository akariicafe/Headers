@class NSString, NSURL;

@interface WFTrelloBoard : WFTrelloObject

@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL closed;

+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)closedJSONTransformer;

- (void).cxx_destruct;

@end
