@class _SwiftDriverApprovalState;

@interface DriverApprovalState : NSObject {
    _SwiftDriverApprovalState *_swiftDriverApprovalState;
}

- (id)displayName;
- (void).cxx_destruct;
- (BOOL)driverIsApproved;
- (BOOL)updatePending;
- (id)usageText;
- (id)initWithSwiftDriverApprovalState:(id)a0;

@end
