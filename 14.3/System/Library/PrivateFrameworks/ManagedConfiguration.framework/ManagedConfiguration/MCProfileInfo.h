@class NSString, NSDate;

@interface MCProfileInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) NSString *profileDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *organization;
@property (retain, nonatomic) NSDate *expiryDate;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
