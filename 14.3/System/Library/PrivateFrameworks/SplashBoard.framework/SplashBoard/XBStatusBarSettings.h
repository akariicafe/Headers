@class NSString, BSMutableSettings;

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying, NSSecureCoding> {
    BSMutableSettings *_settings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic, getter=isBackgroundActivityEnabled) BOOL backgroundActivityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)_initWithBSSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
