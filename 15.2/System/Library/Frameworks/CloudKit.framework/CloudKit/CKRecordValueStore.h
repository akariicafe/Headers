@class NSString, NSMutableDictionary, NSMutableSet, CKRecord;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    BOOL _trackChanges;
    CKRecord *_record;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *originalValues;
@property (retain, nonatomic) NSMutableSet *changedKeysSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithRecord:(id)a0;
- (void)resetChangedKeys;
- (id)changedKeys;
- (id)valueForKey:(id)a0;
- (id)recordID;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (void)setNilValueForKey:(id)a0;
- (BOOL)checkProperties:(BOOL)a0 withValueCheckBlock:(id /* block */)a1;
- (BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)a0 includingAllArrayItems:(BOOL)a1 withValueCheckBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
