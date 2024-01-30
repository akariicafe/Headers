@class NSString, NSDictionary, NSDate;

@interface _CDUserActivity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleId;
@property (copy) NSString *type;
@property (copy) NSString *title;
@property (copy) NSDate *date;
@property (copy) NSDictionary *payload;

+ (id)createFromUserActivity:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
