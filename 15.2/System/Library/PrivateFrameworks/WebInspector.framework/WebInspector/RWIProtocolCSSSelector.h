@class NSString, NSArray;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *specificity;
@property (nonatomic) BOOL dynamic;

- (id)initWithText:(id)a0;

@end
