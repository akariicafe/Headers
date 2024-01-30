@class NSString;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *clientDescription;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority;
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(BOOL)a3 deviceSharingWithOtherClientsAllowed:(BOOL)a4 deviceAvailabilityChangedHandler:(id /* block */)a5;
- (BOOL)canShareDeviceWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;
- (void)dealloc;
- (id)debugDescription;

@end
