@interface SAPhoneAnswer : SABaseClientBoundCommand

@property (nonatomic) BOOL videoAllowed;

+ (id)answer;
+ (id)answerWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
