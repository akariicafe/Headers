@class NSString;

@interface _SwiftDriverApprovalState : NSObject {
    void /* unknown type, empty encoding */ driver;
    void /* unknown type, empty encoding */ _approvalState;
    void /* unknown type, empty encoding */ _updateStatus;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *usageText;

- (id)init;
- (void).cxx_destruct;
- (BOOL)driverIsApproved;
- (BOOL)updatePending;

@end
