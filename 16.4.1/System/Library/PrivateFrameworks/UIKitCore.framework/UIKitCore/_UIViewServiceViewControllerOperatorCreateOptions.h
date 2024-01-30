@class NSString, NSArray, NSUUID, BSMachPortSendRight, UITraitCollection;

@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSArray *serializedAppearanceRepresentations;
@property (retain, nonatomic) NSUUID *contextToken;
@property (copy, nonatomic) NSArray *displayConfigurations;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort;
@property (nonatomic) long long availableTextServices;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) BOOL hostCanDynamicallySpecifySupportedInterfaceOrientations;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
