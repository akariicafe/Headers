@class IOUSBHostControllerInterface;

@interface IOUSBHostCIControllerStateMachine : NSObject

@property (nonatomic) int controllerState;
@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface;
@property (nonatomic) unsigned long long lastFrameNumber;
@property (nonatomic) unsigned long long lastFrameTimestamp;

- (void).cxx_destruct;
- (BOOL)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 error:(id *)a1;
- (BOOL)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 status:(int)a1 error:(id *)a2;
- (BOOL)processCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 readonly:(BOOL)a1 error:(id *)a2;
- (BOOL)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 status:(int)a1 frame:(unsigned long long)a2 timestamp:(unsigned long long)a3 error:(id *)a4;
- (BOOL)enqueueUpdatedFrame:(unsigned long long)a0 timestamp:(unsigned long long)a1 error:(id *)a2;
- (id)initWithInterface:(id)a0 error:(id *)a1;

@end
