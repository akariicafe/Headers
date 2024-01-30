@class ASCLockup, NSString;

@interface ASCLockupProductDetails : NSObject

@property (readonly, copy, nonatomic) ASCLockup *lockup;
@property (readonly, copy, nonatomic) NSString *storeSheetHostBundleID;
@property (readonly, copy, nonatomic) NSString *storeSheetUsageContext;

+ (id)URLForLockupID:(id)a0 ofKind:(id)a1 withOfferFlags:(long long)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)presentFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithLockup:(id)a0 storeSheetHostBundleID:(id)a1 storeSheetUsageContext:(id)a2;
- (void)present:(id /* block */)a0;

@end
