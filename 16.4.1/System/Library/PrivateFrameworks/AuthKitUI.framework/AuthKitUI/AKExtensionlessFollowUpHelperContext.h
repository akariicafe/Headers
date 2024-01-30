@class NSString, NSDictionary, UIViewController;

@interface AKExtensionlessFollowUpHelperContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueItemIdentifier;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSString *akAction;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (weak, nonatomic) UIViewController *presentingViewController;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
