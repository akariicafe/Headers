@class NSString, MCMUserIdentityCache, MCMPOSIXUser, NSObject;
@protocol OS_xpc_object;

@interface MCMClientConnectionContext : NSObject <MCMClientConnectionContext>

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
