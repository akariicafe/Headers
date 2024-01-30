@interface STSettingChange : STSiriModelObject {
    long long _settingType;
    id _valueBeforeUpdate;
    id _valueAfterUpdate;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithSettingType:(long long)a0 valueBeforeUpdate:(id)a1 valueAfterUpdate:(id)a2;
- (long long)settingType;
- (id)valueBeforeUpdate;
- (id)valueAfterUpdate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
