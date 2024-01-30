@class NSString, NSData;

@interface BlastDoorAPSQuickRelayAllocationStatus : NSObject {
    void /* unknown type, empty encoding */ aPSQuickRelayAllocationStatus;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_participantId;
@property (nonatomic, readonly) long long participantId;
@property (nonatomic, readonly) BOOL has_allocationStatus;
@property (nonatomic, readonly) long long allocationStatus;
@property (nonatomic, readonly) NSData *token;
@property (nonatomic, readonly) NSString *destinationId;

- (id)init;
- (void).cxx_destruct;

@end
