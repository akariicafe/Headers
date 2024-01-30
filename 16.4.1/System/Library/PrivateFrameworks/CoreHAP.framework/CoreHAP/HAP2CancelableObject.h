@class NSError, HAP2PropertyLock, NSString;

@interface HAP2CancelableObject : HAP2LoggingObject <HAP2Cancelable>

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (retain, nonatomic) NSError *cancelError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
