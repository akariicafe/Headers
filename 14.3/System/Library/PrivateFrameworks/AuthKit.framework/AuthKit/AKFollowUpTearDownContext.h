@class NSString;

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *akAction;
@property (copy, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
