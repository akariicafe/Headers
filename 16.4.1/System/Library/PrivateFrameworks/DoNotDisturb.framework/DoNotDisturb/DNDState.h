@class NSArray, NSUUID, NSString, DNDModeConfiguration, NSDate;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_activeModeAssertionMetadata;
    NSString *_overrideModeIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL willSuppressInterruptions;
@property (readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly, nonatomic) unsigned long long suppressionState;
@property (readonly, copy, nonatomic) NSArray *activeModeIdentifiers;
@property (readonly, copy, nonatomic) NSString *activeModeIdentifier;
@property (readonly, copy, nonatomic) DNDModeConfiguration *activeModeConfiguration;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *userVisibleTransitionDate;
@property (readonly, nonatomic) unsigned long long userVisibleTransitionLifetimeType;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activeModeUUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)activeModeAssertionMetadata;
- (id)activeModeIdentifier;
- (id)activeModeIdentifiers;
- (id)initWithSuppressionState:(unsigned long long)a0 activeModeAssertionMetadata:(id)a1 startDate:(id)a2 userVisibleTransitionDate:(id)a3 userVisibleTransitionLifetimeType:(unsigned long long)a4 activeModeConfiguration:(id)a5;
- (void)setOverrideModeIdentifier:(id)a0;
- (BOOL)willSuppressInterruptions;

@end
