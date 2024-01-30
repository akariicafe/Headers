@class NSString;

@interface STReminderListObject : STSiriModelObject {
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;

- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)_aceContextObjectValue;
- (id)_aceValue;
- (void)encodeWithCoder:(id)a0;

@end
