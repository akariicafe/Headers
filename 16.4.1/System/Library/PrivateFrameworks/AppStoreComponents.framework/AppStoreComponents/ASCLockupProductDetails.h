@class ASCLockup, NSString, NSDictionary;

@interface ASCLockupProductDetails : NSObject

@property (readonly, copy, nonatomic) ASCLockup *lockup;
@property (readonly, copy, nonatomic) NSString *storeSheetHostBundleID;
@property (readonly, copy, nonatomic) NSString *storeSheetUsageContext;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

+ (id)URLForLockupID:(id)a0 ofKind:(id)a1 offerFlags:(long long)a2 queryParameters:(id)a3;
+ (id)URLForLockupID:(id)a0 ofKind:(id)a1 withOfferFlags:(long long)a2;
+ (id)queryParametersForLockup:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)presentFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithLockup:(id)a0 storeSheetHostBundleID:(id)a1 storeSheetUsageContext:(id)a2;
- (void)present:(id /* block */)a0;
- (id)initWithLockup:(id)a0;
- (id)initWithLockup:(id)a0 storeSheetHostBundleID:(id)a1 storeSheetUsageContext:(id)a2 parameters:(id)a3;

@end
