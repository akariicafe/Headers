@class NSString;

@interface SASettingGetPlaybackAudioRoute : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *audioCategory;

+ (id)getPlaybackAudioRoute;
+ (id)getPlaybackAudioRouteWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
