@interface BLHelper : NSObject

+ (void)displayUserPrompt:(unsigned long long)a0 strings:(id)a1 completion:(id /* block */)a2;
+ (id)bootArgs;
+ (id)numberFromDouble:(double)a0;
+ (id)deviceBatteryLevel;
+ (id)objectOrNSNull:(id)a0;
+ (id)encryptData:(id)a0;
+ (id)numberFromFloat:(float)a0;
+ (void)writeTailspinToFile:(id)a0;
+ (id)deviceSerialNumber;
+ (id)numberForBootArg:(id)a0;
+ (id)stringFromFrameType:(unsigned int)a0;
+ (id)buildVersion;
+ (id)stringFromSequenceType:(unsigned int)a0;

@end
