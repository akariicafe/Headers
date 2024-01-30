@class NSString, NSArray;

@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=hasValidAccount) BOOL validAccount;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSArray *aliases;

- (id)initWithValidAccount:(BOOL)a0 name:(id)a1 handle:(id)a2 aliases:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
