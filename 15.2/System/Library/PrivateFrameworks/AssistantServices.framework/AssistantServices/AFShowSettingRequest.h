@interface AFShowSettingRequest : AFSiriRequest {
    long long _settingType;
}

+ (BOOL)supportsSecureCoding;

- (long long)settingType;
- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)_initWithSettingType:(long long)a0;
- (id)initWithCoder:(id)a0;

@end
