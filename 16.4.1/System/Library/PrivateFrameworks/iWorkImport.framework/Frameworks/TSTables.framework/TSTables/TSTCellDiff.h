@class TSSPropertyMap;

@interface TSTCellDiff : NSObject <NSCopying>

@property (retain, nonatomic) TSSPropertyMap *propertyMapToSet;
@property (retain, nonatomic) TSSPropertyMap *propertyMapToReset;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) BOOL containsCellStyleProperties;
@property (readonly, nonatomic) BOOL containsParagraphStyleProperties;
@property (readonly, nonatomic) BOOL containsTextStyleProperties;
@property (readonly, nonatomic) BOOL containsCellStyleOrCellDiffCellStyleProperties;

+ (void)initialize;
+ (id)cellDiff;

- (unsigned long long)estimatedByteSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forProperty:(int)a1;
- (id)allProperties;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)containsProperty:(int)a0;
- (void)setBoolValue:(BOOL)a0 forProperty:(int)a1;
- (void)setFloatValue:(float)a0 forProperty:(int)a1;
- (void)setIntValue:(int)a0 forProperty:(int)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)propertyMapToSetWithProperties:(id)a0;
- (BOOL)boolValueForSetProperty:(int)a0;
- (void)collectPropertyKeysIntoIndexSet:(id)a0;
- (BOOL)containsAnyPropertiesInSet:(id)a0;
- (BOOL)doesResetAnyProperties:(id)a0;
- (BOOL)doesResetProperty:(int)a0;
- (BOOL)doesSetAnyProperties:(id)a0;
- (BOOL)doesSetProperty:(int)a0;
- (id)objectApplyingDiffToObject:(id)a0 andUpdateInverse:(id)a1;
- (id)objectApplyingDiffToObject:(id)a0 andUpdateInverse:(id)a1 optionalConcurrentStylesheet:(id)a2;
- (id)objectForResetProperty:(int)a0;
- (id)objectForSetProperty:(int)a0;
- (void)removeObjectsToSetForProperty:(int)a0;
- (void)resetFloatValue:(float)a0 forProperty:(int)a1;
- (void)resetIntValue:(int)a0 forProperty:(int)a1;
- (void)resetObject:(id)a0 forProperty:(int)a1;
- (void)resetPropertiesFromMap:(id)a0;
- (void)setPropertiesFromMap:(id)a0;

@end
