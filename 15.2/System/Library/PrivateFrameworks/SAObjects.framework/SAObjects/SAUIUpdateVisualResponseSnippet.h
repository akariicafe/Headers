@class NSData, NSString;

@interface SAUIUpdateVisualResponseSnippet : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *stateData;
@property (copy, nonatomic) NSString *viewId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
