@class NSData, NSString;

@interface HIDLibElement : NSObject

@property struct __IOHIDElement { } *elementRef;
@property struct __IOHIDValue { } *valueRef;
@property struct __IOHIDValue { } *defaultValueRef;
@property long long integerValue;
@property (retain) NSData *dataValue;
@property (copy) NSString *psKey;
@property (readonly) unsigned long long timestamp;
@property (readonly) long long length;
@property (readonly) struct IOHIDElementStruct { unsigned int cookieMin; unsigned int cookieMax; unsigned int parentCookie; unsigned int type; unsigned int collectionType; unsigned int flags; unsigned int usagePage; unsigned int usageMin; unsigned int usageMax; int min; int max; int scaledMin; int scaledMax; unsigned int size; unsigned int reportSize; unsigned int reportCount; unsigned int reportID; unsigned int unit; unsigned int unitExponent; unsigned int duplicateValueSize; unsigned int duplicateIndex; unsigned int bytes; unsigned int valueSize; unsigned int rawReportCount; } elementStruct;
@property BOOL isConstant;
@property BOOL isUpdated;
@property (readonly) unsigned int elementCookie;
@property (readonly) unsigned int collectionCookie;
@property (readonly) int type;
@property (readonly) unsigned int usage;
@property (readonly) unsigned int usagePage;
@property (readonly) unsigned int unit;
@property (readonly) unsigned char unitExponent;
@property (readonly) unsigned char reportID;
@property (readonly) unsigned int usageMin;
@property (readonly) unsigned int usageMax;
@property (readonly) int collectionType;

- (id)initWithElementRef:(struct __IOHIDElement { } *)a0;
- (BOOL)isEqualToHIDLibElement:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithElementStruct:(struct IOHIDElementStruct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; int x10; int x11; int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; } *)a0 parent:(struct __IOHIDElement { } *)a1 index:(unsigned int)a2;
- (id)description;
- (void).cxx_destruct;

@end
