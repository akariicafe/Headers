@interface __NSCFBoolean : NSNumber

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

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
- (long long)_cfNumberType;
- (int)intValue;
- (unsigned char)unsignedCharValue;
- (void)getValue:(void *)a0;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)boolValue;
- (id)stringValue;
- (double)doubleValue;
- (unsigned long long)retainCount;
- (long long)integerValue;
- (id)retain;
- (id)description;
- (unsigned long long)_cfTypeID;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
