@interface BLHelper : NSObject

+ (id)encryptData:(id)a0;
+ (id)stringFromFrameType:(unsigned int)a0;
+ (id)numberForBootArg:(id)a0;
+ (id)buildVersion;
+ (void)writeTailspinToFile:(id)a0;
+ (id)bootArgs;
+ (id)objectOrNSNull:(id)a0;
+ (id)numberFromFloat:(float)a0;
+ (id)deviceBatteryLevel;
+ (id)stringFromSequenceType:(unsigned int)a0;
+ (void)displayUserPrompt:(unsigned long long)a0 strings:(id)a1 completion:(id /* block */)a2;
+ (id)numberFromDouble:(double)a0;
+ (id)deviceSerialNumber;

@end
