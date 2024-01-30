@class SCLState, SCLScheduleSettings;

@interface SCLSchoolModeServerSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (copy, nonatomic) SCLState *state;
@property (nonatomic, getter=isLoaded) BOOL loaded;

- (id)initWithSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
