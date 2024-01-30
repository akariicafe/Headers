@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (const char *)objCType;
- (id)retain;
- (float)floatValue;
- (unsigned char)unsignedCharValue;
- (int)intValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (id)stringValue;
- (void)getValue:(void *)a0;
- (char)charValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)unsignedIntegerValue;
- (long long)longValue;
- (long long)longLongValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (unsigned long long)unsignedLongLongValue;
- (oneway void)release;
- (long long)integerValue;
- (double)doubleValue;
- (BOOL)_tryRetain;
- (void)dealloc;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)init;
- (id)descriptionWithLocale:(id)a0;
- (id)description;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)boolValue;

@end
