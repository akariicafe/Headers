@class NSString;

@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic) long long timerMode;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double warnInterval;
@property (nonatomic) double quickUnwarnInterval;
@property (nonatomic) double totalInterval;
@property (readonly, nonatomic) BOOL shouldWarn;
@property (readonly, nonatomic) BOOL shouldExpireAfterWarn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimerMode:(long long)a0 warnInterval:(double)a1 totalInterval:(double)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
