@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject

@property (copy, nonatomic) NSArray *entitlements;
@property (copy, nonatomic) NSError *error;

- (id)initWithEntitlements:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
