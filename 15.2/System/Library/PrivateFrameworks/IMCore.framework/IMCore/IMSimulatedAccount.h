@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (BOOL)supportsRegistration;
- (id)loginIMHandle;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)isOperational;

@end
