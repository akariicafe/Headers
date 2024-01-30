@class NSString, NSArray;

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *utterances;

+ (id)setSuggestedUtterances;
+ (id)setSuggestedUtterancesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
