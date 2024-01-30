@class HMDUserPresence, HMDDevice, HMDHomePresence;

@interface HMDHomePresenceUpdate : HMFObject

@property (readonly, nonatomic) HMDHomePresence *homePresence;
@property (readonly, nonatomic) HMDUserPresence *userPresence;
@property (readonly, nonatomic, getter=isUpdate) BOOL update;
@property (readonly, nonatomic) HMDDevice *causingDevice;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHomePresence:(id)a0 userPresence:(id)a1 update:(BOOL)a2 causingDevice:(id)a3;

@end
