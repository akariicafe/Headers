@class SAUIGetResponseAlternatives;

@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIGetResponseAlternatives *playbackCommand;

+ (id)getResponseAlternativesPlayback;
+ (id)getResponseAlternativesPlaybackWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
