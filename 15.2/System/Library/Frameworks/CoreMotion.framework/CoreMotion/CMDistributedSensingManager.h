@class CMDistributedSensingManagerInternal;
@protocol CMDistributedSensingDelegate;

@interface CMDistributedSensingManager : NSObject

@property (readonly, nonatomic) CMDistributedSensingManagerInternal *_internal;
@property (nonatomic) id<CMDistributedSensingDelegate> delegate;

+ (BOOL)isVehicleStateUpdatesAvailable;

- (void)subscribeToVehicleState;
- (void)unsubscribeToVehicleState;
- (id)init;
- (void)dealloc;

@end
