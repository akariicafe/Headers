@class NSNumber, NSString, SASPronunciationData;

@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *interactionId;
@property (retain, nonatomic) SASPronunciationData *pronunciationData;

+ (id)pronunciationRecognized;
+ (id)pronunciationRecognizedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
