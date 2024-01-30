@class AFMultiUserConnection;

@interface MSAssistantPreferences : NSObject

@property (retain, nonatomic) AFMultiUserConnection *connection;

+ (id)sharedPreferences;
+ (id)intentExamples;
+ (BOOL)isMultiUserEnabledForSiri;
+ (id)supportedMediaIntents;

- (id)init;
- (void).cxx_destruct;
- (void)getHomeUserIDForSpeaker:(id)a0 completion:(id /* block */)a1;
- (void)getSharedUserIDForHomeUser:(id)a0 completion:(id /* block */)a1;

@end
