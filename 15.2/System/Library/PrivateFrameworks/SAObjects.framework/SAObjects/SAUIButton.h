@class NSArray, NSString, SAUIColor, SAUIImageResource;

@interface SAUIButton : SAAceView

@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) SAUIColor *textColor;

+ (id)button;
+ (id)buttonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
