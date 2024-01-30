@class NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
