@class NSString, NSMutableDictionary, NSMutableSet, CKRecord;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    BOOL _trackChanges;
    CKRecord *_record;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isEncrypted) BOOL encrypted;
@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *originalValues;
@property (retain, nonatomic) NSMutableSet *changedKeysSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setNilValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)recordID;
- (BOOL)containsValueOfClasses:(id)a0 passingTest:(id /* block */)a1;
- (BOOL)containsValuePassingTest:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (id)initWithRecord:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changedKeys;
- (id)valueForKey:(id)a0;
- (void)resetChangedKeys;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)enumerateKeysAndValuesOfClasses:(id)a0 usingBlock:(id /* block */)a1;
- (id)allKeys;
- (void)enumerateKeysAndValuesOfClasses:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)containsValueOfClasses:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void).cxx_destruct;

@end
