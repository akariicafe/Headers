@class NSDate;

@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateUpdated;
@property (readonly, nonatomic, getter=isAdmin) BOOL admin;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAdminStatus:(BOOL)a0 dateUpdated:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
