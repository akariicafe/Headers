@class NSString, NSData;

@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSData *iconData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVendorName:(id)a0 itemName:(id)a1 iconData:(id)a2;

@end
