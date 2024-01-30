@interface MCProfileStateHandler : MCStateHandler

+ (id)settingsStateDictionaryWithDetailsIncluded:(BOOL)a0;
+ (id)restrictionsStateDictionaryWithDetailsIncluded:(BOOL)a0;
+ (void)addProfileSettingsStateHandler;
+ (void)addProfileRestrictionsStateHandler;

@end
