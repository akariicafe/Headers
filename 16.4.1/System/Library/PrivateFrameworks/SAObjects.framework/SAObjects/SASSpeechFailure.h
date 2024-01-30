@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (nonatomic) long long errorCode;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *reasonDescription;

+ (id)speechFailure;
+ (id)speechFailureWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
