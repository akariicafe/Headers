@class NSArray, NSNumber;

@interface SignpostSupportSerializabledObjectCollection : NSObject

@property (readonly, nonatomic) NSArray *objectArray;
@property (readonly, nonatomic) NSNumber *formatVersion;
@property (readonly, nonatomic) unsigned long long machContinuousTimeFirst;
@property (readonly, nonatomic) unsigned long long machContinuousTimeLast;

+ (BOOL)_versionIsSupported:(id)a0;
+ (id)_deserializedDictionaryForData:(id)a0 errorOut:(id *)a1;
+ (BOOL)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)a0 processingBlock:(id /* block */)a1 errorOut:(id *)a2;
+ (BOOL)timeRangeForSerializedCollection:(id)a0 continuousTimeFirstOut:(unsigned long long *)a1 continuousTimeLastOut:(unsigned long long *)a2 errorOut:(id *)a3;
+ (BOOL)enumerateSignpostSupportObjectsInSerializedCollection:(id)a0 processingBlock:(id /* block */)a1 errorOut:(id *)a2;

- (void).cxx_destruct;
- (id)initWithSerializeableObjectArray:(id)a0;
- (id)newSerializedCollection:(BOOL)a0;
- (id)initWithData:(id)a0 errorOut:(id *)a1;

@end
