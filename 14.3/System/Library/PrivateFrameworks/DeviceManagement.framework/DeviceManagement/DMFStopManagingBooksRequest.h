@interface DMFStopManagingBooksRequest : DMFTaskRequest

+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

@end
