@class NSDictionary, NSString;

@interface BLPurchaseResponseItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *item;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSString *purchaseParameters;
@property (nonatomic) BOOL isPurchaseRedownload;
@property (copy, nonatomic) NSString *downloadID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
