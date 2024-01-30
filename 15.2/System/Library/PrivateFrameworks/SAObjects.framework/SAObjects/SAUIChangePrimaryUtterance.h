@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speechRecognitionId;
@property (nonatomic) long long utteranceIndex;

+ (id)changePrimaryUtterance;
+ (id)changePrimaryUtteranceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
