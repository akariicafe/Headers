@class NSSet, NSDictionary, NSArray;

@interface MTChangeSet : NSObject

@property (retain, nonatomic) NSSet *changedProperties;
@property (retain, nonatomic) NSDictionary *changeDictionary;
@property (readonly, nonatomic) NSArray *changes;

+ (id)changeSetWithChangesFromObject:(id)a0 toObject:(id)a1;
+ (id)dictionaryFromChanges:(id)a0;
+ (id)changeSetWithChangesFromObject:(id)a0 toObject:(id)a1 inProperties:(id)a2;

- (id)initWithChanges:(id)a0;
- (void).cxx_destruct;
- (id)initWithChangeDictionary:(id)a0;
- (id)description;
- (BOOL)hasChangesInProperties:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToChangeSet:(id)a0 checkOriginalValues:(BOOL)a1;
- (BOOL)isEquivalentToChangeSet:(id)a0;
- (id)changedValueForProperty:(id)a0 hasProperty:(BOOL *)a1;
- (id)changeSetByAddingChangeSet:(id)a0;
- (BOOL)hasChangeForProperty:(id)a0;
- (BOOL)hasChangesInCommonWithChangeSet:(id)a0;
- (id)deserializedChangedValueForProperty:(id)a0 hasProperty:(BOOL *)a1;
- (id)_deserializer;

@end
