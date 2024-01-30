@class NSString;

@interface WFToggleAlarmContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *alarmIdentifier;
@property (readonly, copy, nonatomic) NSString *alarmName;
@property (readonly, nonatomic) unsigned long long operation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithAlarmIdentifier:(id)a0 alarmName:(id)a1 operation:(unsigned long long)a2;
- (BOOL)showsUserInterfaceWhenRunning;

@end
