@class NSString;

@interface RMManagementChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *accountDescription;
@property (readonly, copy, nonatomic) NSString *organizationDescription;
@property (readonly, copy, nonatomic) NSString *enrollmentToken;
@property (readonly, nonatomic) BOOL isEnrolled;

- (BOOL)isEqualToChannel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 identifier:(id)a1 enrollmentToken:(id)a2 accountIdentifier:(id)a3 accountDescription:(id)a4 organizationDescription:(id)a5 isEnrolled:(BOOL)a6;
- (id)initWithType:(long long)a0 identifier:(id)a1 enrollmentToken:(id)a2 accountIdentifier:(id)a3 accountDescription:(id)a4;

@end
