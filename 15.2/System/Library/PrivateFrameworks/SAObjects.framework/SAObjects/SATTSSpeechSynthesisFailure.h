@class NSString;

@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reasonDescription;

+ (id)speechSynthesisFailure;
+ (id)speechSynthesisFailureWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
