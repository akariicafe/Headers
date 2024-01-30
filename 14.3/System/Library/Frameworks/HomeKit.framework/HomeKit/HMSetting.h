@class NSString, NSUUID, HMSettingValue;
@protocol HMSettingManager;

@interface HMSetting : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long type;
@property (weak) id<HMSettingManager> settingManager;
@property (copy) NSString *name;
@property (copy) id value;
@property (copy) NSString *keyPath;
@property (retain) Class valueClass;
@property unsigned long long properties;
@property (readonly) HMSettingValue *internalValue;
@property (readonly, getter=isWritable) BOOL writable;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSUUID *identifier;

- (void)merge:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 value:(id)a3 properties:(unsigned long long)a4;
- (id)_initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 value:(id)a3 properties:(unsigned long long)a4;
- (id)initWithInternal;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)valueForUpdate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
