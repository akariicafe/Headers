@class NSString, NSArray;

@interface _HMDNEHelperClientCacheEntry : NSObject

@property (readonly, nonatomic) NSString *signingId;
@property (readonly, nonatomic) NSArray *identifiers;

- (void).cxx_destruct;
- (id)initWithSigningId:(id)a0 identifiers:(id)a1;

@end
