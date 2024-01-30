@class NSArray, _UIHostedWindowHostingHandle, BSMachPortSendRight;

@interface _UIViewServiceControllerOperatorCreateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _UIHostedWindowHostingHandle *serviceWindowHostingHandle;
@property (copy, nonatomic) NSArray *supportedInterfaceOrientations;
@property (nonatomic) long long preferredStatusBarStyle;
@property (nonatomic) int preferredStatusBarVisibility;
@property (retain, nonatomic) BSMachPortSendRight *accessibilityServerPort;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
