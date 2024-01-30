@class NSDictionary, BAGResourceOptions, NSString;

@interface BAGConfig : NSObject <NSSecureCoding, BAGResource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) BAGResourceOptions *options;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long defaultKeyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 options:(id)a1;
- (id)dataForKeyList:(id)a0;
- (id)dictionaryOfDataForKey:(id)a0 keyType:(unsigned long long)a1;
- (BOOL)boolForKeyList:(id)a0;
- (id)_boolNumberFromString:(id)a0;
- (id)_checkIsArrayObject:(id)a0 typeBlock:(id /* block */)a1;
- (BOOL)_checkIsBoolObject:(id)a0;
- (id)_checkIsDataObject:(id)a0;
- (id)_checkIsDictionaryObject:(id)a0 typeBlock:(id /* block */)a1;
- (id)_checkIsNumberObject:(id)a0;
- (id)_checkIsStringObject:(id)a0;
- (id)_traverseKeyList:(id)a0;
- (id)arrayForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayForKeyList:(id)a0;
- (id)arrayForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayOfDataForKey:(id)a0;
- (id)arrayOfDataForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayOfDataForKeyList:(id)a0;
- (id)arrayOfDataForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayOfNumbersForKey:(id)a0;
- (id)arrayOfNumbersForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayOfNumbersForKeyList:(id)a0;
- (id)arrayOfNumbersForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayOfStringsForKey:(id)a0;
- (id)arrayOfStringsForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)arrayOfStringsForKeyList:(id)a0;
- (id)arrayOfStringsForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (BOOL)boolForKey:(id)a0 keyType:(unsigned long long)a1;
- (BOOL)boolForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)dataForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)dataForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryForKeyList:(id)a0;
- (id)dictionaryForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryOfDataForKey:(id)a0;
- (id)dictionaryOfDataForKeyList:(id)a0;
- (id)dictionaryOfDataForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryOfNumbersForKey:(id)a0;
- (id)dictionaryOfNumbersForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryOfNumbersForKeyList:(id)a0;
- (id)dictionaryOfNumbersForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryOfStringsForKey:(id)a0;
- (id)dictionaryOfStringsForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)dictionaryOfStringsForKeyList:(id)a0;
- (id)dictionaryOfStringsForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)numberForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)numberForKeyList:(id)a0;
- (id)numberForKeyList:(id)a0 keyType:(unsigned long long)a1;
- (id)stringForKey:(id)a0 keyType:(unsigned long long)a1;
- (id)stringForKeyList:(id)a0;
- (id)stringForKeyList:(id)a0 keyType:(unsigned long long)a1;

@end
