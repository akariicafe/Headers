@interface MCProfileStateHandler : MCStateHandler

+ (id)settingsStateDictionaryWithDetailsIncluded:(BOOL)a0;
+ (void)addProfileRestrictionsStateHandler;
+ (void)addProfileSettingsStateHandler;
+ (id)restrictionsStateDictionaryWithDetailsIncluded:(BOOL)a0;

@end
