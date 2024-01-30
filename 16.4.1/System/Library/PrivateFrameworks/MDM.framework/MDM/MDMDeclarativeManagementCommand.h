@interface MDMDeclarativeManagementCommand : NSObject

+ (id)declarativeManagementFatalError;
+ (void)_enrollmentTypeWithProfileIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)processMultiUserDeviceUserChannelRequestTypeWithProfileIdentifier:(id)a0 request:(id)a1 error:(id *)a2;
+ (BOOL)processRequestTypeWithProfileIdentifier:(id)a0 request:(id)a1 error:(id *)a2;
+ (BOOL)unenrollWithProfileIdentifier:(id)a0 error:(id *)a1;

@end
