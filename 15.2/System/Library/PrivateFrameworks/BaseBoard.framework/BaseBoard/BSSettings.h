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
- (void)encodeWithXPCDictionary:(id)a0;
- (id)basicDescriptionWithPrefix:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (void)_removeAllSettings;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isKeyedSettings;
- (id)succinctDescriptionBuilder;
- (id)allSettings;
- (id)objectForSetting:(unsigned long long)a0;
- (id)_valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2 multilinePrefix:(id)a3;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (long long)flagForSetting:(unsigned long long)a0;

@end
