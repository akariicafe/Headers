@class NSString;

@interface HKSPSleepFocusConfiguration : NSObject <BSDescriptionProviding, NAEquatable, NAHashable>

@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly, nonatomic) BOOL mirrorsSleepFocusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptySleepFocusConfiguration;
+ (id)readFromDefaults;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copy;
- (id)sleepFocusConfigurationUpdatingHasSleepFocusMode:(BOOL)a0;
- (id)sleepFocusConfigurationUpdatingMirrorsSleepFocusMode:(BOOL)a0;
- (void)writeToDefaults;
- (id)initWithHasSleepFocusMode:(BOOL)a0 mirrorsSleepFocusMode:(BOOL)a1;

@end
