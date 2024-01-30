@class SAUISash, NSString, SAUIConfirmationOptions;

@interface SAUISnippet : SAAceView

@property (nonatomic) long long category;
@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (retain, nonatomic) SAUISash *sash;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *title;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
