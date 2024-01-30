@interface __NSCFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (const char *)objCType;
- (id)retain;
- (float)floatValue;
- (unsigned char)unsignedCharValue;
- (int)intValue;
- (id)stringValue;
- (void)getValue:(void *)a0;
- (char)charValue;
- (unsigned long long)_cfTypeID;
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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (long long)compare:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)description;
- (unsigned long long)retainCount;
- (BOOL)boolValue;
- (BOOL)isEqualToNumber:(id)a0;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;

@end
