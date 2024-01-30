@class NSArray;

@interface SADialogInflectWordResponses : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *inflectWordResponses;

+ (id)inflectWordResponses;
+ (id)inflectWordResponsesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
