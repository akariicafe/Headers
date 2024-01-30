@class NSDate;

@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateUpdated;
@property (readonly, nonatomic, getter=isAdmin) BOOL admin;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAdminStatus:(BOOL)a0 dateUpdated:(id)a1;

@end
