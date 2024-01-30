@class NSString, SAAnswerSpeakableAnswer;

@interface SAAnswerDirectAnswer : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *answer;
@property (retain, nonatomic) SAAnswerSpeakableAnswer *speakableAnswer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
