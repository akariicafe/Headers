@interface RMMDMHelper : NSObject

+ (BOOL)_isActive;
+ (void)_setActive:(BOOL)a0;
+ (BOOL)processDeclarativeManagementCommandWithProfileIdentifier:(id)a0 channelType:(long long)a1 username:(id)a2 personaID:(id)a3 request:(id)a4 error:(id *)a5;
+ (BOOL)unenrollWithProfileIdentifier:(id)a0 channelType:(long long)a1 error:(id *)a2;
+ (id)_enrolledDeviceChannelWithController:(id)a0 profileIdentifier:(id)a1 error:(id *)a2;
+ (id)_enrolledUserChannelWithController:(id)a0 profileIdentifier:(id)a1 username:(id)a2 personaID:(id)a3 error:(id *)a4;
+ (BOOL)_unenrollDeviceChannelWithController:(id)a0 enrollmentURL:(id)a1 error:(id *)a2;
+ (BOOL)_unenrollUserChannelWithController:(id)a0 enrollmentURL:(id)a1 error:(id *)a2;
+ (id)_enrollDeviceChannelIfNeededWithController:(id)a0 profileIdentifier:(id)a1 error:(id *)a2;
+ (id)_managementChannelForAccountIdentifier:(id)a0 controller:(id)a1 error:(id *)a2;
+ (id)_enrollUserChannelIfNeededWithController:(id)a0 profileIdentifier:(id)a1 username:(id)a2 personaID:(id)a3 error:(id *)a4;
+ (id)_managementChannelForEnrollmentURL:(id)a0 controller:(id)a1 error:(id *)a2;

@end
