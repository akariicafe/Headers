@interface _PFCachedNumber : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)new;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;

- (long long)integerValue;
- (double)doubleValue;
- (unsigned short)unsignedShortValue;
- (id)objectID;
- (id)init;
- (long long)longLongValue;
- (id)autorelease;
- (float)floatValue;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (unsigned long long)retainCount;
- (void)getValue:(void *)a0;
- (id)copy;
- (char)charValue;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (unsigned long long)unsignedLongValue;
- (id)retain;
- (unsigned char)unsignedCharValue;
- (long long)longValue;
- (id)stringValue;
- (id)descriptionWithLocale:(id)a0;
- (int)intValue;
- (BOOL)boolValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;

@end
