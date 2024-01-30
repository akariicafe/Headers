@class NSSet, NSString, NSArray;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer

@property (readonly, nonatomic) NSSet *changedCharacteristics;
@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSArray *postedBulletins;

- (void).cxx_destruct;
- (id)initWithCameraSessionID:(id)a0 changedCharacteristics:(id)a1 timeInterval:(double)a2;

@end
