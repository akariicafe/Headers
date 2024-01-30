@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject

@property (copy, nonatomic) NSArray *entitlements;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithEntitlements:(id)a0 error:(id)a1;

@end
