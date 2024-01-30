@class IOUSBHostControllerInterface;

@interface IOUSBHostCIDeviceStateMachine : NSObject

@property (nonatomic) int deviceState;
@property (nonatomic) unsigned long long completeRoute;
@property (nonatomic) unsigned long long deviceAddress;
@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0 command:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a1 error:(id *)a2;
- (BOOL)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 error:(id *)a1;
- (BOOL)processCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 readonly:(BOOL)a1 error:(id *)a2;
- (BOOL)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 status:(int)a1 deviceAddress:(unsigned long long)a2 error:(id *)a3;
- (BOOL)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 status:(int)a1 error:(id *)a2;

@end
