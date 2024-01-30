@class NSData;

@interface SAFmfSnippet : SAUISnippet

@property (copy, nonatomic) NSData *modelData;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
