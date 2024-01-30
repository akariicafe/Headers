@class NSArray, NSString, NSURL;

@interface SAVCSContentShelf : SAAceView

@property (copy, nonatomic) NSArray *contentHead;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;

+ (id)contentShelf;
+ (id)contentShelfWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
