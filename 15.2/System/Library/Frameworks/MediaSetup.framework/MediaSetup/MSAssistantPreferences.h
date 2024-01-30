@class AFMultiUserConnection;

@interface MSAssistantPreferences : NSObject

@property (retain, nonatomic) AFMultiUserConnection *connection;

+ (id)sharedPreferences;
+ (BOOL)isMultiUserEnabledForSiri;
+ (id)intentExamples;
+ (id)supportedMediaIntents;

- (void).cxx_destruct;
- (id)init;
- (void)getHomeUserIDForSpeaker:(id)a0 completion:(id /* block */)a1;
- (void)getSharedUserIDForHomeUser:(id)a0 completion:(id /* block */)a1;

@end
