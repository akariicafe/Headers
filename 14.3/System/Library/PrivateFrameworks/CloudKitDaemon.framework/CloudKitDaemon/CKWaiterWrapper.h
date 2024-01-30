@class NSArray, NSString, NSObject;
@protocol OS_os_activity, CKDZoneGatekeeperWaiter;

@interface CKWaiterWrapper : NSObject

@property (readonly, nonatomic) id<CKDZoneGatekeeperWaiter> waiter;
@property (readonly, nonatomic) NSArray *zoneIDs;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *personaID;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWaiter:(id)a0 zoneIDs:(id)a1 completionHandler:(id /* block */)a2 activity:(id)a3;
- (void)invokeCompletionHandler:(BOOL)a0;

@end
