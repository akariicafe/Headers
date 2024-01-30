@class NSString, NSArray;

@interface SAPhoneCallConfirmationSnippet : SAUISnippet

@property (copy, nonatomic) NSString *confirmationDisplayText;
@property (copy, nonatomic) NSArray *persons;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
