@class NSNumber, NSError;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *itemID;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

+ (id)successfullyPurchasedItemID:(id)a0;
+ (id)failedToPurchaseItemID:(id)a0 withError:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
