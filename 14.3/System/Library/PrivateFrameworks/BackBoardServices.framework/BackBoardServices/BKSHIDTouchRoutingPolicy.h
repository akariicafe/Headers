@class BSMutableSettings, NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BSMutableSettings *settings;
@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=shouldAvoidHitTesting) BOOL avoidHitTesting;

+ (void)inspectChangesWithOldPolicy:(id)a0 newPolicy:(id)a1 usingBlock:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
