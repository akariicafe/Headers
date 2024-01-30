@class NSArray;

@interface AFDismissAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarmURLs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
