@interface TMLTypeRegistry : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)classNameForType:(unsigned long long)a0;
+ (id)encodedTypeForType:(unsigned long long)a0;
+ (unsigned long long)typeForEncodedType:(id)a0;
+ (unsigned long long)typeForTypeName:(id)a0;
+ (id)typeNameForType:(unsigned long long)a0;

@end
