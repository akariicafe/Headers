@class NSString;

@interface SATTSSpeechSynthesisVoice : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contentVersion;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *keyString;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL useServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)speechSynthesisVoice;
+ (id)speechSynthesisVoiceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
