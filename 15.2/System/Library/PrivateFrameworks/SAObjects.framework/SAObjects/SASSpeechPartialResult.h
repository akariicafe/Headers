@class NSString, NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *tokens;

+ (id)speechPartialResult;
+ (id)speechPartialResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
