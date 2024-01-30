@class NSString;

@interface SASettingGetRecordAudioRoute : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *audioCategory;

+ (id)getRecordAudioRouteWithDictionary:(id)a0 context:(id)a1;
+ (id)getRecordAudioRoute;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
