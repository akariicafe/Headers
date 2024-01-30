@class NSString, CBDevice;

@interface DSDeviceContext : NSObject

@property (nonatomic) BOOL isMe;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char tiebreaker;
@property (nonatomic) unsigned char vehicleState;
@property (nonatomic) unsigned char vehicleConfidence;
@property (nonatomic) unsigned char coordinationStatus;
@property (copy, nonatomic) CBDevice *bleDevice;
@property (nonatomic) unsigned long long discoveryFlag;
@property (nonatomic) unsigned long long changedFlag;
@property (nonatomic) unsigned long long dsInfoIsAlreadyFound;
@property (nonatomic) unsigned long long dsActionIsAlreadyFound;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)updateWithCBDevice:(id)a0;
- (void)encodeSelf:(id)a0;
- (id)initWithCBDevice:(id)a0 error:(id *)a1;

@end
