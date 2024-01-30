@class STAlarm;

@interface STCreateAlarmAction : STAlarmAction {
    STAlarm *_alarm;
}

+ (BOOL)supportsSecureCoding;

- (id)alarm;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithAlarm:(id)a0;

@end
