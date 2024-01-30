@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *language;

+ (id)setActivationToken;
+ (id)setActivationTokenWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
