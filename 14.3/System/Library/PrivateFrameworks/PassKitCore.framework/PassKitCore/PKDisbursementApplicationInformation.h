@class NSString, NSData;

@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSData *iconData;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithVendorName:(id)a0 itemName:(id)a1 iconData:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
