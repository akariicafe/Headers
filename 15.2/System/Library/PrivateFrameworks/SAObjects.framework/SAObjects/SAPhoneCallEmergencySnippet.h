@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *bodyTextColor;
@property (nonatomic) long long countDownSeconds;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (retain, nonatomic) SAUIColor *headerTextColor;

+ (id)callEmergencySnippet;
+ (id)callEmergencySnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
