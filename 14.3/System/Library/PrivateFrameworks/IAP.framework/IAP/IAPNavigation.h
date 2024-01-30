@class NSSet, NSNotificationCenter, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, IAPNavigationDelegate;

@interface IAPNavigation : NSObject {
    struct __CFNotificationCenter { } *_darwinNotificationCenter;
    NSNotificationCenter *_localNotificationCenter;
}

@property (retain) NSObject<OS_xpc_object> *iap2d_connection;
@property BOOL connected;
@property (retain) NSObject<OS_dispatch_queue> *processingQ;
@property (weak) id<IAPNavigationDelegate> delegate;
@property (retain) NSSet *availableAccessories;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateInternalStateWithArrayOfAccessories:(id)a0;
- (id)_convert_xpc_array_to_NSArray:(id)a0;
- (void)_iap2d_server_did_launch;
- (void)_getConnectedAccessories;
- (void)updateNavigationGuidanceInfo:(id)a0 forAccessory:(id)a1 withComponent:(id)a2;
- (void)updateNavigationManeuverInfo:(id)a0 forAccessory:(id)a1 withComponent:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)_iap2d_server_did_die;

@end
