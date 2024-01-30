@class NSArray, NSDate;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_activeModeAssertionMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL willSuppressInterruptions;
@property (readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata;
@property (readonly, nonatomic) unsigned long long suppressionState;
@property (readonly, copy, nonatomic) NSArray *activeModeIdentifiers;
@property (readonly, copy, nonatomic) NSDate *userVisibleTransitionDate;
@property (readonly, nonatomic) unsigned long long userVisibleTransitionLifetimeType;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)activeModeAssertionMetadata;
- (id)initWithSuppressionState:(unsigned long long)a0 activeModeAssertionMetadata:(id)a1 userVisibleTransitionDate:(id)a2 userVisibleTransitionLifetimeType:(unsigned long long)a3;
- (id)activeModeIdentifiers;
- (BOOL)willSuppressInterruptions;

@end
