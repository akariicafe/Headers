@class NSArray, HMDMediaPlaybackAction;

@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject

@property (readonly) HMDMediaPlaybackAction *residualAction;
@property (readonly) NSArray *characteristicWriteRequests;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAction:(id)a0 characteristicWriteRequests:(id)a1;

@end
