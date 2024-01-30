@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (BOOL)isConnected;
- (BOOL)supportsRegistration;
- (void).cxx_destruct;
- (BOOL)isOperational;
- (id)loginIMHandle;

@end
