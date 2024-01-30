@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (id)loginIMHandle;
- (void).cxx_destruct;
- (BOOL)isOperational;
- (BOOL)isConnected;
- (BOOL)supportsRegistration;

@end
