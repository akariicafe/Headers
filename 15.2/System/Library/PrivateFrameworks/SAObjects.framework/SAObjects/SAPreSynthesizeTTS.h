@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *aceAudioData;
@property (copy, nonatomic) NSArray *dialogStrings;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSArray *streamIds;

+ (id)preSynthesizeTTS;
+ (id)preSynthesizeTTSWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
