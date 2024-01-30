@class NSData;

@interface SAFmfSnippet : SAUISnippet

@property (copy, nonatomic) NSData *modelData;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
