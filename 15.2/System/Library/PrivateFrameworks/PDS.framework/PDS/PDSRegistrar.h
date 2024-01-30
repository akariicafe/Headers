@class NSString;
@protocol PDSRemoteVendor;

@interface PDSRegistrar : NSObject

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) id<PDSRemoteVendor> remoteVendor;

- (void)currentRegistrationsForUser:(id)a0 completion:(id /* block */)a1;
- (BOOL)ensureRegistrationPresent:(id)a0 forUser:(id)a1 error:(id *)a2;
- (void)usersWithCompletion:(id /* block */)a0;
- (id)allEntriesWithError:(id *)a0;
- (BOOL)deleteRegistration:(id)a0 fromUser:(id)a1 error:(id *)a2;
- (id)_wrappedErrorForGivenError:(id)a0 XPCError:(id)a1;
- (void)activeUsersWithCompletion:(id /* block */)a0;
- (BOOL)removeAllRegistrationsFromUser:(id)a0 error:(id *)a1;
- (id)allRegistrationsWithError:(id *)a0;
- (void)allRegistrationsForUser:(id)a0 completion:(id /* block */)a1;
- (BOOL)addRegistration:(id)a0 toUser:(id)a1 error:(id *)a2;
- (id)currentRegistrationsForUser:(id)a0 error:(id *)a1;
- (BOOL)removeRegistration:(id)a0 fromUser:(id)a1 error:(id *)a2;
- (id)description;
- (id)allRegistrationsForUser:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_activeRegistrationsFromEntries:(id)a0;
- (void)allEntriesWithCompletion:(id /* block */)a0;
- (id)_wrappedErrorForFailedRemote:(id)a0;
- (id)_registrationsFromEntries:(id)a0;
- (void)allRegistrationsWithCompletion:(id /* block */)a0;
- (id)usersWithError:(id *)a0;
- (id)activeUsersWithError:(id *)a0;
- (id)initWithClientID:(id)a0 error:(id *)a1;
- (BOOL)batchUpdateRegistrations:(id)a0 forUser:(id)a1 error:(id *)a2;

@end
