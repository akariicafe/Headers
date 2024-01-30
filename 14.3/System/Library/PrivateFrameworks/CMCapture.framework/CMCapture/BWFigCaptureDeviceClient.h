@class NSString;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *clientDescription;
@property (readonly, nonatomic) int stealingBehavior;
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;

- (void)dealloc;
- (id)description;
- (BOOL)canShareDeviceWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithPID:(int)a0 clientDescription:(id)a1 stealingBehavior:(int)a2 deviceSharingWithOtherClientsAllowed:(BOOL)a3 deviceAvailabilityChangedHandler:(id /* block */)a4;

@end
