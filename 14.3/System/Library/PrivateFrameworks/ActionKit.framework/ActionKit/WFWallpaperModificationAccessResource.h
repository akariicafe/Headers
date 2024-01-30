@interface WFWallpaperModificationAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)name;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (unsigned long long)workflowLevelStatus;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedAccessResourceErrorString;

@end
