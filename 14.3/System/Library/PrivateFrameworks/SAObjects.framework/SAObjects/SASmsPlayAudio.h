@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (retain, nonatomic) SASmsSms *message;

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
