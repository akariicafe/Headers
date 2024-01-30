@class SAUIDecoratedText, SAUIColor, NSString;

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (retain, nonatomic) SAUIDecoratedText *footnote;
@property (retain, nonatomic) SAUIDecoratedText *label;
@property (retain, nonatomic) SAUIColor *labelTextColor;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIColor *titleBackgroundColor;
@property (retain, nonatomic) SAUIColor *titleTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardItem;
+ (id)cardItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
