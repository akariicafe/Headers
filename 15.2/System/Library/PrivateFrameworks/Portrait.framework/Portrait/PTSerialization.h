@interface PTSerialization : NSObject

+ (Class)classForType:(unsigned int)a0;
+ (id)_errorWithCode:(long long)a0;
+ (BOOL)writeObject:(id)a0 toData:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)registerSerializationClass:(Class)a0;
+ (id)objectFromData:(id)a0 error:(id *)a1;
+ (BOOL)isValidObject:(id)a0;
+ (id)_errorFromAtomStream:(id)a0;
+ (id)_errorNotSerializable;
+ (BOOL)_supportedOptions:(id)a0 forObject:(id)a1;
+ (id)_errorUnsupportedVersion;
+ (id)_errorFromAtomWriter:(id)a0;
+ (id)infoForType:(unsigned int)a0;
+ (void)registerTypeInfo:(id)a0;
+ (id)_errorFromAtomError:(id)a0;
+ (unsigned long long)sizeOfSerializedObject:(id)a0 options:(id)a1;
+ (id)dataFromObject:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)registerType:(unsigned int)a0 providerClass:(Class)a1;

@end
