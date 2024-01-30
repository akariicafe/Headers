@interface DMFStopManagingBooksRequest : DMFTaskRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
