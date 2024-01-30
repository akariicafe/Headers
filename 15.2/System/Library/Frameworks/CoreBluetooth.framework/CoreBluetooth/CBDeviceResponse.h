@class NSString;

@interface CBDeviceResponse : NSObject <CUXPCCodable>

@property (nonatomic) unsigned short connectionHandle;
@property (nonatomic) char core0TargetPower;
@property (nonatomic) char core1TargetPower;
@property (nonatomic) char currentPCAP;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) char rssi;
@property (nonatomic) unsigned int sniffInterval;
@property (nonatomic) char txPower;
@property (nonatomic) char txPowerMax;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
