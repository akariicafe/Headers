@class NSString, BSMutableIntegerMap;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding> {
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)flagForSetting:(unsigned long long)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescription;
- (BOOL)isKeyedSettings;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)succinctDescriptionBuilder;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)_removeAllSettings;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)allSettings;
- (id)_valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2 multilinePrefix:(id)a3;
- (id)objectForSetting:(unsigned long long)a0;
- (id)basicDescriptionWithPrefix:(id)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
