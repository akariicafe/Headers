@class NSString;

@interface COAlarmSnoozeNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarmIdentifier:(id)a0;

@end
