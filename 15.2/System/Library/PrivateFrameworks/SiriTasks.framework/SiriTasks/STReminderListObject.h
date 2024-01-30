@class NSString;

@interface STReminderListObject : STSiriModelObject {
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)setName:(id)a0;
- (id)_aceContextObjectValue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)_aceValue;

@end
