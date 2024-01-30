@class HMFTimer, NSString, NSArray, NSMutableArray, HMDDevice;
@protocol HMFLocking;

@interface HMDRemoteDeviceInformation : HMFObject <HMFObject> {
    id<HMFLocking> _lock;
    NSMutableArray *_confirmationHandlers;
}

@property (readonly, nonatomic) HMDDevice *device;
@property (readonly) long long state;
@property (readonly, getter=isReachable) BOOL reachable;
@property (retain, nonatomic) HMFTimer *retryTimer;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearState:(long long)a0;
- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)setReachable:(BOOL)a0 reason:(unsigned long long)a1;
- (void)queueConfirmationHandler:(id /* block */)a0 timeout:(double)a1;
- (void)completeConfirmationsWithError:(id)a0;

@end
