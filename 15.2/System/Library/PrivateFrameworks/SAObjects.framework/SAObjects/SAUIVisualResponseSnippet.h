@class NSData, NSString;

@interface SAUIVisualResponseSnippet : SAUISnippet

@property (copy, nonatomic) NSData *modelData;
@property (copy, nonatomic) NSString *viewIdentifier;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
