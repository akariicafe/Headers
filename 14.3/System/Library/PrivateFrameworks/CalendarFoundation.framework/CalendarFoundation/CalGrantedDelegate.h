@class NSString;

@interface CalGrantedDelegate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (nonatomic) long long permission;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
