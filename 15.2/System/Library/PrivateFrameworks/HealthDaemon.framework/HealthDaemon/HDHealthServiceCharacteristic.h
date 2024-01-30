@class NSString, NSDate;

@interface HDHealthServiceCharacteristic : NSObject <HDHealthServiceCharacteristic>

@property (readonly, nonatomic) NSDate *updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uuid;
+ (unsigned char)uint8FromData:(const char **)a0 before:(const char *)a1;
+ (unsigned int)uint32FromData:(const char **)a0 before:(const char *)a1;
+ (id)_buildWithBinaryValue:(id)a0 error:(id *)a1;
+ (unsigned short)uint16FromData:(const char **)a0 before:(const char *)a1;
+ (id)buildWithBinaryValue:(id)a0 updateTime:(id)a1 error:(id *)a2;
+ (float)floatFromSFLOAT:(unsigned short)a0;
+ (double)doubleFromFLOAT:(unsigned int)a0;
+ (short)int16FromData:(const char **)a0 before:(const char *)a1;
+ (unsigned int)uint24FromData:(const char **)a0 before:(const char *)a1;
+ (float)floatFromSFLOATData:(const char **)a0 before:(const char *)a1;
+ (double)doubleFromFLOATData:(const char **)a0 before:(const char *)a1;
+ (id)dateFromData:(const char **)a0 before:(const char *)a1 calendar:(id)a2;
+ (BOOL)uint8:(unsigned char)a0 toData:(char **)a1 before:(const char *)a2;
+ (BOOL)uint16:(unsigned short)a0 toData:(char **)a1 before:(const char *)a2;
+ (BOOL)uint32:(unsigned int)a0 toData:(char **)a1 before:(const char *)a2;

- (void).cxx_destruct;
- (id)_init;
- (id)getBinaryValueWithError:(id *)a0;
- (void)unitTest_setUpdateTime:(id)a0;

@end
