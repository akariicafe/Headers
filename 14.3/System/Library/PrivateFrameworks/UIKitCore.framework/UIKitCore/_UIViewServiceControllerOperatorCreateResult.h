@class NSArray, _UIHostedWindowHostingHandle, BSMachPortSendRight;

@interface _UIViewServiceControllerOperatorCreateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _UIHostedWindowHostingHandle *serviceWindowHostingHandle;
@property (copy, nonatomic) NSArray *supportedInterfaceOrientations;
@property (nonatomic) long long preferredStatusBarStyle;
@property (nonatomic) int preferredStatusBarVisibility;
@property (retain, nonatomic) BSMachPortSendRight *accessibilityServerPort;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
