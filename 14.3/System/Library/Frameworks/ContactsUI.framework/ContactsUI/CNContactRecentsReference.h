@class NSNumber, NSString;

@interface CNContactRecentsReference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *recentContactID;
@property (readonly, nonatomic) NSString *domain;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecentContactID:(id)a0 domain:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
