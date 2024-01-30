@interface MDMDeclarativeManagementCommand : NSObject

+ (void)_channelTypeWithCompletionHandler:(id /* block */)a0;
+ (BOOL)processRequestTypeWithProfileIdentifier:(id)a0 request:(id)a1 error:(id *)a2;
+ (BOOL)unenrollWithProfileIdentifier:(id)a0 error:(id *)a1;
+ (id)declarativeManagementFatalError;

@end
