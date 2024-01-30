@interface DMFRemoveAppRequest : DMFAppRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
