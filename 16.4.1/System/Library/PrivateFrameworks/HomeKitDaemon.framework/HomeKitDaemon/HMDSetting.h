@class NSArray, HMSettingValue, NSUUID, NSString, NSNumber, NSMutableArray;

@interface HMDSetting : NSObject <HMDSettingBaseProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_constraints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isReadOnly) BOOL readOnly;
@property (copy) NSNumber *type;
@property (copy) NSNumber *properties;
@property (copy) HMSettingValue *internalValue;
@property (retain, nonatomic) NSArray *constraints;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id value;
@property (readonly, copy) NSString *name;
@property (copy) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)settingValueWithModel:(id)a0;

- (id)initWithModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addConstraint:(id)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)constraintsByKeyPathWithCurrentKeyPath:(id)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 name:(id)a2 properties:(id)a3 type:(id)a4 value:(id)a5 constraints:(id)a6;
- (BOOL)updateWithSettingValue:(id)a0;
- (BOOL)wouldValueUpdate:(id)a0;

@end
