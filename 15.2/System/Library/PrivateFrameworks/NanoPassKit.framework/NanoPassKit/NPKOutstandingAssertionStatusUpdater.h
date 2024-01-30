@class NSUUID;

@interface NPKOutstandingAssertionStatusUpdater : NPKIDSHeartbeat

@property (retain, nonatomic) NSUUID *assertionUUID;
@property (nonatomic) int assertType;

- (void).cxx_destruct;

@end
