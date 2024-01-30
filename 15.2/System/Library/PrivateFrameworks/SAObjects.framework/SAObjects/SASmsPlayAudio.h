@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (retain, nonatomic) SASmsSms *message;

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
