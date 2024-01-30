@class NSString;

@interface CALNDataAccessExpressSharedConnection : NSObject <CALNDataAccessExpressConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (void)respondToSharedCalendarInvite:(long long)a0 forCalendarWithID:(id)a1 accountID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)a0 accountID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;

@end
