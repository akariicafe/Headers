@class STAlarm;

@interface STCreateAlarmAction : STAlarmAction {
    STAlarm *_alarm;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)alarm;
- (id)_initWithAlarm:(id)a0;

@end
