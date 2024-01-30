@class NSString, NSDate;

@interface MTTrigger : NSObject <BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *triggerDate;
@property (readonly, nonatomic) BOOL isPastOverrideEvent;
@property (readonly, nonatomic) BOOL isForSnooze;
@property (readonly, nonatomic) BOOL isForGoToBed;
@property (readonly, nonatomic) BOOL isForAlert;
@property (readonly, nonatomic) BOOL isForNotification;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) BOOL isEvent;
@property (readonly, nonatomic) BOOL isBedtimeRelated;
@property (readonly, nonatomic) BOOL isWakeUpRelated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerWithDate:(id)a0 triggerType:(unsigned long long)a1 isPastOverrideEvent:(BOOL)a2;
+ (id)_stringForType:(unsigned long long)a0;
+ (id)triggerWithDate:(id)a0 triggerType:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (long long)compare:(id)a0;
- (id)initWithDate:(id)a0 type:(unsigned long long)a1;
- (BOOL)isEqualToTrigger:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithDate:(id)a0 type:(unsigned long long)a1 isPastOverrideEvent:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
