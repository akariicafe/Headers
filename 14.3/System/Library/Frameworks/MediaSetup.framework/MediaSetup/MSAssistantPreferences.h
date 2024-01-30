@interface MSAssistantPreferences : NSObject

+ (void)getHomeUserIDForSpeaker:(id)a0 completion:(id /* block */)a1;
+ (void)getSharedUserIDForHomeUser:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isMultiUserEnabledForSiri;
+ (id)intentExamples;

@end
