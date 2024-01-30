@class NSError, CBDevice, NSString;

@interface CBPairingInfo : NSObject <CUXPCCodable>

@property (retain, nonatomic) CBDevice *device;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long pairingType;
@property (copy, nonatomic) NSString *pin;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;

@end
