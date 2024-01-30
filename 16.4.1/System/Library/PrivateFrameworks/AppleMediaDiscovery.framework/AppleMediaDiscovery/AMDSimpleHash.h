@class NSData, NSMutableDictionary;

@interface AMDSimpleHash : NSObject

@property (nonatomic) unsigned int moduloBase;
@property (retain, nonatomic) NSMutableDictionary *collisionMap;
@property (nonatomic) unsigned int numEntries;
@property (nonatomic) unsigned long long *keys;
@property (retain, nonatomic) NSData *keysStorage;
@property (nonatomic) unsigned long long *values;
@property (retain, nonatomic) NSData *valuesStorage;
@property (nonatomic) char *metadata;
@property (retain, nonatomic) NSData *metadataStorage;

+ (unsigned int)getBase:(unsigned int)a0;

- (unsigned int)count;
- (id)initWithCapacity:(unsigned int)a0;
- (void)removeAllKeys;
- (void).cxx_destruct;
- (void)getAllKeysInto:(unsigned long long *)a0;
- (BOOL)addForKey:(unsigned long long)a0 theValue:(unsigned long long)a1;
- (BOOL)getValueForKey:(unsigned long long)a0 into:(unsigned long long *)a1;
- (BOOL)removeKey:(unsigned long long)a0 andSaveValueInto:(unsigned long long *)a1;

@end
