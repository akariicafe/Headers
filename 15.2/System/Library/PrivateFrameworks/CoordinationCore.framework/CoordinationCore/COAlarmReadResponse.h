@class NSArray;

@interface COAlarmReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *alarms;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAlarms:(id)a0;
- (id)initWithFilteredAlarms:(id)a0;
- (id)initWithAlarms:(id)a0 deletes:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
