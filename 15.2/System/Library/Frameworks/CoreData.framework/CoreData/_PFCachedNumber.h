@interface _PFCachedNumber : NSNumber

+ (id)new;
+ (id)alloc;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)copyWithZone:(struct _NSZone { } *)a0;

- (unsigned int)unsignedIntValue;
- (float)floatValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (long long)longValue;
- (unsigned long long)unsignedIntegerValue;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;
- (int)intValue;
- (unsigned char)unsignedCharValue;
- (void)getValue:(void *)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (BOOL)boolValue;
- (id)stringValue;
- (double)doubleValue;
- (unsigned long long)retainCount;
- (long long)integerValue;
- (id)retain;
- (id)description;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)descriptionWithLocale:(id)a0;
- (id)init;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
