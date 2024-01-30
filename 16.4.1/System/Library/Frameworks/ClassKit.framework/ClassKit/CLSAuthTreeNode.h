@class NSString;

@interface CLSAuthTreeNode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *statusID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long status;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatusID:(id)a0 identifier:(id)a1 status:(long long)a2;

@end
