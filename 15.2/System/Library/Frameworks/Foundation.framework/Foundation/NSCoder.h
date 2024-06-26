@interface NSCoder : NSObject

+ (BOOL)__categorizeException:(id)a0 intoError:(id *)a1;

- (id)ls_decodeDictionaryWithKeysOfClass:(Class)a0 valuesOfClass:(Class)a1 forKey:(id)a2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)a0 valuesOfClasses:(id)a1 forKey:(id)a2;
- (id)ls_decodeArrayWithValuesOfClass:(Class)a0 forKey:(id)a1;
- (id)ls_decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)ls_decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)ls_decodeSetWithValuesOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (id)allowedClasses;
- (float)decodeFloatForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeObjectForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (BOOL)requiresSecureCoding;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (unsigned int)systemVersion;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeByrefObject:(id)a0;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)decodeDictionaryWithKeysOfClass:(Class)a0 objectsOfClass:(Class)a1 forKey:(id)a2;
- (void)encodeObject:(id)a0;
- (void)encodeRootObject:(id)a0;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (struct _NSZone { } *)objectZone;
- (struct CGSize { double x0; double x1; })decodeSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRect;
- (BOOL)_validateAllowedClassesContainsClass:(Class)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (BOOL)__failWithExceptionName:(id)a0 errorCode:(long long)a1 format:(id)a2;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)__setError:(id)a0;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1 size:(unsigned long long)a2;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (struct CGPoint { double x0; double x1; })decodePoint;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (BOOL)_allowsValueCoding;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeDataObject:(id)a0;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (BOOL)validateClassSupportsSecureCoding:(Class)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)decodeTopLevelObjectAndReturnError:(id *)a0;
- (void)encodeBycopyObject:(id)a0;
- (id)decodeArrayOfObjectsOfClass:(Class)a0 forKey:(id)a1;
- (long long)versionForClassName:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (id)decodeTopLevelObjectForKey:(id)a0 error:(id *)a1;
- (int)decodeInt32ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (void)setAllowedClasses:(id)a0;
- (void)setObjectZone:(struct _NSZone { } *)a0;
- (void)decodeValuesOfObjCTypes:(const char *)a0;
- (id)decodeDataObject;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (long long)decodeLongForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0 error:(id *)a1;
- (long long)decodingFailurePolicy;
- (BOOL)validateAllowedClass:(Class)a0 forKey:(id)a1;
- (struct CGSize { double x0; double x1; })decodeSizeForKey:(id)a0;
- (void)encodeLong:(long long)a0 forKey:(id)a1;
- (id)decodeTopLevelObjectOfClasses:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)decodePropertyListForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRectForKey:(id)a0;
- (id)__decoderInfoForAllowedClassesWarning;
- (BOOL)_validateAllowedClass:(Class)a0 forKey:(id)a1 allowingInvocations:(BOOL)a2;
- (id)decodeTopLevelObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (id)error;
- (void)failWithError:(id)a0;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (struct CGPoint { double x0; double x1; })decodePointForKey:(id)a0;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;

@end
