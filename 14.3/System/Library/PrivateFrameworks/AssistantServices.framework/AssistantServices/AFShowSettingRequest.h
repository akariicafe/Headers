@interface AFShowSettingRequest : AFSiriRequest {
    long long _settingType;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)settingType;
- (id)createResponse;
- (id)_initWithSettingType:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
