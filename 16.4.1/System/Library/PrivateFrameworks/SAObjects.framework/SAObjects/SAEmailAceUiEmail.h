@class NSNumber;

@interface SAEmailAceUiEmail : SAEmailEmail

@property (copy, nonatomic) NSNumber *read;

+ (id)aceUiEmailWithDictionary:(id)a0 context:(id)a1;
+ (id)aceUiEmail;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
