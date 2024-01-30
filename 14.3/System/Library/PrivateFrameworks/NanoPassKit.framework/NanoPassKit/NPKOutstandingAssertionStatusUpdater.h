@class NSUUID;

@interface NPKOutstandingAssertionStatusUpdater : NPKProvisioningServiceAgentStatusUpdater

@property (retain, nonatomic) NSUUID *assertionUUID;
@property (nonatomic) int assertType;

- (void).cxx_destruct;

@end
