@class NSArray, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *clientVoiceKeyList;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *filteredVoiceKey;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchSpeechSynthesisVoiceRequest;
+ (id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
