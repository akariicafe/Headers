@class SASettingAudioRoute;

@interface SASettingGetAudioRouteResponse : SASettingResponse

@property (retain, nonatomic) SASettingAudioRoute *audioRoute;

+ (id)getAudioRouteResponse;
+ (id)getAudioRouteResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
