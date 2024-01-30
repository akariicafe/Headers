@class NSString, NSURL;

@interface WFTrelloUser : WFTrelloObject

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSURL *URL;

+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
