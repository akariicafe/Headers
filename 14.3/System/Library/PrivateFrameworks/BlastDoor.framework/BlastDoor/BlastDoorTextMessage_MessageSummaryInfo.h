@class NSString;

@interface BlastDoorTextMessage_MessageSummaryInfo : NSObject {
    void /* unknown type, empty encoding */ textMessage_MessageSummaryInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_updatedDateWithServerTime;
@property (nonatomic, readonly) BOOL updatedDateWithServerTime;
@property (nonatomic, readonly) BOOL has_hasBeenRetried;
@property (nonatomic, readonly) BOOL hasBeenRetried;
@property (nonatomic, readonly) NSString *sourceApplicationID;
@property (nonatomic, readonly) NSString *associatedBalloonBundleID;

- (id)init;
- (void).cxx_destruct;

@end
