@class NSArray;

@interface SAStructuredDictationResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *items;

+ (id)structuredDictationResult;
+ (id)structuredDictationResultWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
