@class NSMutableDictionary, NSString, NSMutableSet, CKRecord;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL trackChanges;
@property (weak, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *originalValues;
@property (retain, nonatomic) NSMutableSet *changedKeysSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_validateKeyUniquenessForKey:(id)a0;
- (void)resetChangedKeys;
- (id)valueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)recordID;
- (BOOL)checkProperties:(BOOL)a0 withValueCheckBlock:(id /* block */)a1;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)_validateRecordKey:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_sanitizeRecordValue:(id)a0;
- (BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)a0 includingAllArrayItems:(BOOL)a1 withValueCheckBlock:(id /* block */)a2;
- (id)changedKeys;
- (void)_validateRecordValue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
