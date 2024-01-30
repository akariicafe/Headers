@interface __NSCFNumber : NSNumber

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)integerValue;
- (BOOL)isNSNumber__;
- (double)doubleValue;
- (long long)_cfNumberType;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)floatValue;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned int)unsignedIntValue;
- (unsigned long long)retainCount;
- (void)getValue:(void *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (char)charValue;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (unsigned long long)unsignedLongValue;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (unsigned char)unsignedCharValue;
- (long long)longValue;
- (id)stringValue;
- (id)descriptionWithLocale:(id)a0;
- (int)intValue;
- (BOOL)boolValue;
- (short)shortValue;
- (unsigned long long)unsignedLongLongValue;

@end
