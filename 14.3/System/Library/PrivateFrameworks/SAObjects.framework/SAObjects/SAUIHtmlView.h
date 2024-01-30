@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *html;

+ (id)htmlView;
+ (id)htmlViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
