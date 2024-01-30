@class NSArray;

@interface STDeleteAlarmAction : STAlarmAction {
    NSArray *_alarmIds;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)alarmIds;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithAlarmIds:(id)a0;

@end
